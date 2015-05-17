### Defining Classes for the main Parser ###

from pycparser import c_parser, c_ast, parse_file
from pycparser import parse_file, c_parser, c_generator

ast=parse_file('/home/rbavishi/CBMC - Bug Clustering Project/generate_trace_converted.c', use_cpp=True)
a=ast.ext[0]
b=a.children()[1][1]
c=b.block_items[7]

def cond2string(node):
    ret_string=''
    if type(node) == c_ast.BinaryOp:
        ret_string=' ' + node.op + ' '
        left = node.left
        right = node.right
        if type(left) != c_ast.ID and type(left) != c_ast.Constant:
            ret_string = '( ' + cond2string(left) + ' )' +ret_string
        else:
            ret_string = cond2string(left) + ret_string

        if type(right) != c_ast.ID and type(right) != c_ast.Constant:
            ret_string = ret_string + '( ' + cond2string(right) + ' )' 
        else:
            ret_string = ret_string + cond2string(right) 
        
        return ret_string  
                
    elif type(node) == c_ast.UnaryOp:
        ret_string=node.op
        expr = node.expr
        if type(expr) != c_ast.ID and type(expr) != c_ast.Constant:
            ret_string = ret_string + '( ' + cond2string(expr) + ' )'
        else:
            ret_string = ret_string + cond2string(expr)

        return ret_string

    elif type(node) == c_ast.Cast:
        return '(' + node.expr.value + ')'

    elif type(node) == c_ast.ID:
        return node.name

    elif type(node) == c_ast.Constant:
        return node.value

        
class i_Condition:
    def __init__(self, node):
        self.cond_string = cond2string(node)


        
