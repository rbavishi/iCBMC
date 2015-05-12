# Parse the converted program and the trace-debug file to create a equivalent program.

###### GLOBAL VARIABLES ######

### FUNCTIONS ({}) :: Hold names of the functions and number of arguments for each
### VARIABLE_DATA_TYPES ({}) :: Hold names of variables and their data-types
### VARIABLE_NAME_CONVERSIONS :: Map real variable names to the converted ones (Required for unwinding functions)
### CODE :: Store the converted C code, for extracting lines using line numbers in the trace-debug file.

FUNCTIONS={}
VARIABLE_DATA_TYPES={}
VARIABLE_NAME_CONVERSIONS={}
CODE=[]
TRACE_INST_TYPES=[]
TRACE_INST_VARIABLES=[]
TRACE_LINE_NUMBERS=[]


def test_valid_variable_character(c,first_character):
        c=ord(c)

        ### Check whether c = [A-Za-z0-9] or '_'
        return ((65 <= c and c <= 90) or (97 <= c and c <= 122)) or (((c == '_') or (48 <= c and c <= 57)) and first_character==False)

### FUNCTION: parse_and_rename_variables: Replace original variable names with the new ones

def parse_and_rename_variables(line, function):

        global FUNCTIONS, VARIABLE_DATA_TYPES, VARIABLE_NAME_CONVERSIONS
        length = len(line)
        return_line = ''
        i = 0
	double_inv_comma_encountered=False
	single_inv_comma_encountered=False
        while (i < length):
                if double_inv_comma_encountered==False and single_inv_comma_encountered==False and test_valid_variable_character(line[i],True):
                        start_id = i + 1;
                        read_word=line[i]
                        while (start_id < length and test_valid_variable_character(line[start_id],False)==True):
                                read_word += line[start_id]
                                start_id += 1

			if (i>0 and line[i-1]!='.') and VARIABLE_NAME_CONVERSIONS.has_key((read_word, function)):
                                return_line = return_line + VARIABLE_NAME_CONVERSIONS[(read_word, function)]
                                i = start_id
                        else:
                                return_line = return_line + read_word
                                i = start_id
		elif single_inv_comma_encountered==True:
                        return_line += line[i]
			if line[i] == "'" and (i>0 and line[i-1]!="\\"):
				single_inv_comma_encountered=False
                        i += 1

		elif double_inv_comma_encountered==True:
                        return_line += line[i]
			if line[i] == '"' and (i>0 and line[i-1]!="\\"):
				double_inv_comma_encountered=False
                        i += 1
		else:
			return_line += line[i]
			if line[i] == '"' and (i>0 and line[i-1]!="\\"):
				double_inv_comma_encountered=True
			elif line[i] == "'" and (i>0 and line[i-1]!="\\"):
				single_inv_comma_encountered=True
			i += 1

        return return_line
                                
### FUNCTION: count_number_of_arguments: Count number of arguments in a string defining a function

def count_number_of_arguments(function_def):
    start_id=function_def.find('(')
    finish_id=function_def.find(')')

    if (start_id == finish_id - 1):
        return 0

    return function_def.count(',') + 1

### FUNCTION: read_symbols :: read data-types of the variables in the input program - from the generate_trace_symbols.txt

### INPUT :: File pointer for generate_trace_symbols.txt

def read_symbols(f):

        global FUNCTIONS, VARIABLE_DATA_TYPES
        f.seek(0)
        list_symbols = f.read().split('\n')
        list_symbols.remove('')
        for item in list_symbols:
                index = item.find(' ')
                name, data_type = item[:index], item[index+1:]
                if not '::' in name:
                        ### It is a function (Crude hack) - Count number of arguments
                        FUNCTIONS[name]=count_number_of_arguments(data_type)
                elif not '$object' in name: ## Trash object -- unnecessary
                        ### It is a variable
			temp=name.split('::')
                        actual_name=temp[-1]
			function_name=temp[0]
                        name=name.replace('::','___')
                        VARIABLE_DATA_TYPES[name]=data_type
                        VARIABLE_NAME_CONVERSIONS[(actual_name, function_name)]=name

def read_code(f):

	global CODE
	f.seek(0)
	temp=f.read()
	init_code = temp.split('\n')
	init_code = [ y for y in init_code if y!='' and y!='{' and y!='}' ]
	init_code = [ y.lstrip() for y in init_code ]
	CODE = [''] + init_code

def read_trace(f):

	global TRACE_INST_TYPES, TRACE_INST_VARIABLES, TRACE_LINE_NUMBERS

	f.seek(0)
	temp=f.read()
	temp=temp.split('\n')
	temp.remove('')
	for i in temp:
		line = i.split('||')
		print line
		if len(line) == 3: #Variable involved
			TRACE_INST_TYPES += [line[0]]
			TRACE_INST_VARIABLES += [line[1]]
			TRACE_LINE_NUMBERS += [int(line[2])]

		else:              #No Variable involved
			TRACE_INST_TYPES += [line[0]]
			TRACE_INST_VARIABLES += ['']
			TRACE_LINE_NUMBERS += [int(line[1])]



def generate_equivalent_program():

        global FUNCTIONS, VARIABLE_DATA_TYPES, VARIABLE_NAME_CONVERSIONS, CODE, TRACE_LINE_NUMBERS, TRACE_INST_VARIABLES, TRACE_INST_TYPES
	final_code = CODE[TRACE_LINE_NUMBERS[0]] + " {\n"
	i = 1
	curr_function="main"
	while (i < len(TRACE_INST_TYPES) - 1 ):

		if TRACE_INST_TYPES[i] != "FUNCTION_CALL":

			if TRACE_LINE_NUMBERS[i + 1] != TRACE_LINE_NUMBERS[i]: #### INDEPENDENT INSTRUCTION : Only need to check for while loops

				line = CODE[TRACE_LINE_NUMBERS[i]]
				if TRACE_INST_TYPES[i] == "LOCATION" :        ### CAN be a while loop
					if line[:6] == "while(":              ### Easy hack, has to work
						new_line = 'if' + line[5:]    ### Convert whiles to IFs
						new_line = parse_and_rename_variables(new_line, curr_function)
						final_code += new_line + "\n"
				else:
					new_line = parse_and_rename_variables(line, curr_function)
					final_code += new_line + "\n"
				i += 1

			else:   #### Painful:: Need to check if it's a FOR Loop. Library Functions make a mess of this

				line = CODE[TRACE_LINE_NUMBERS[i]]
				if line[:4] == "for(":                        ### Crude hack, has to work
					temp = line.strip().split(';')
					step = temp[-1].strip().lstrip().replace(')','')
					final_code += parse_and_rename_variables(step, curr_function) + ';'
					if len(temp) == 3:                    ### No extra ; character
						condition = temp[1].strip().lstrip()
						final_code += parse_and_rename_variables(condition, curr_function) + ';'

					else:
						condition = reduce(lambda x,y: x + ';' + y, temp[1:len(temp)-1]) ### Reknit the string
						condition = condition.strip().lstrip()
						final_code += parse_and_rename_variables(condition, curr_function) + ';'
					i += 2

				else:
					final_code += parse_and_rename_variables(line, curr_function)
					cur_line_num = TRACE_LINE_NUMBERS[i]

					while (TRACE_LINE_NUMBERS[i] == cur_line_num):
						i += 1

		else:
			##### We have a function call here




					










	



if __name__ == "__main__":
    f=open('generate_trace_symbols.txt','r')
    read_symbols(f)
    print FUNCTIONS
    print VARIABLE_DATA_TYPES
    print VARIABLE_NAME_CONVERSIONS
    f.close()

    f=open('generate_trace_converted.c','r')
    read_code(f)
    print CODE
    f.close()

    f=open('trace-debug.txt','r')
    read_trace(f)
    print TRACE_INST_TYPES, TRACE_INST_VARIABLES, TRACE_LINE_NUMBERS
    f.close()


        
                        
                        




