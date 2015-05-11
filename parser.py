# Parse the converted program and the trace-debug file to create a equivalent program.

### FUNCTION: count_number_of_arguments: Count number of arguments in a string defining a function

def count_number_of_arguments(function_def):
    start_id=function_def.find('(')
    finish_id=function_def.find(')')

    if (start_id == finish_id - 1):
        return 0

    return function_def.count(',') + 1
### FUNCTION: read_symbols :: read data-types of the variables in the input program - from the generate_trace_symbols.txt

### INPUT :: File pointer for generate_trace_symbols.txt

FUNCTIONS={}
VARIABLE_DATA_TYPES={}




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
                else:
                        ### It is a variable
                        name=name.replace('::','___')
                        VARIABLE_DATA_TYPES[name]=data_type


if __name__ == "__main__":
    f=open('generate_trace_symbols.txt','r')
    read_symbols(f)
    print FUNCTIONS
    print VARIABLE_DATA_TYPES
    f.close()

        
                        
                        




