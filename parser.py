# Parse the converted program and the trace-debug file to create a equivalent program.

###### GLOBAL VARIABLES ######

### FUNCTIONS ({}) :: Hold names of the functions and number of arguments for each
### VARIABLE_DATA_TYPES ({}) :: Hold names of variables and their data-types
### VARIABLE_NAME_CONVERSIONS :: Map real variable names to the converted ones (Required for unwinding functions)

FUNCTIONS={}
VARIABLE_DATA_TYPES={}
VARIABLE_NAME_CONVERSIONS={}

def test_valid_variable_character(c,first_character):
        c=ord(c)

        ### Check whether c = [A-Za-z0-9] or '_'
        return ((65 <= c and c <= 90) or (97 <= c and c <= 122)) or (((c == '_') or (48 <= c and c <= 57)) and first_character==False)

### FUNCTION: parse_and_rename_variables: Replace original variable names with the new ones

def parse_and_rename_variables(line):

        global FUNCTIONS, VARIABLE_DATA_TYPES, VARIABLE_NAME_CONVERSIONS
        length = len(line)
        return_line = ''
        i = 0
        while (i < length):
                if test_valid_variable_character(line[i],True):
                        start_id = i + 1;
                        read_word=line[i]
                        while (start_id < length and test_valid_variable_character(line[start_id],False)==True):
                                read_word += line[start_id]
                                start_id += 1

			if (i>0 and line[i-1]!='.') and VARIABLE_NAME_CONVERSIONS.has_key(read_word):
                                return_line = return_line + VARIABLE_NAME_CONVERSIONS[read_word]
                                i = start_id
                        else:
                                return_line = return_line + read_word
                                i = start_id
                else:
                        return_line += line[i]
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
                        actual_name=name.split('::')[-1]
                        name=name.replace('::','___')
                        VARIABLE_DATA_TYPES[name]=data_type
                        VARIABLE_NAME_CONVERSIONS[actual_name]=name



if __name__ == "__main__":
    f=open('generate_trace_symbols.txt','r')
    read_symbols(f)
    print FUNCTIONS
    print VARIABLE_DATA_TYPES
    print VARIABLE_NAME_CONVERSIONS
    print parse_and_rename_variables("signed int i;")
    f.close()

        
                        
                        




