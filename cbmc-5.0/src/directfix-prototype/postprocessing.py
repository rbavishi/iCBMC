OP_CONVERSIONS={
    "plus":"+", "minus":"-", "mult":"*", "div":"/",
    "equal":"==", "implies":"=>", "iff":"<=>",
    "le":"<=", "lt":"<", "ge":">=", "gt":">",
    "unary_minus":"-", "unary_plus":"+",
    "notequal":"!=", "and":"&&", "or":"||", "not":"!", "bitand":"&", "bitor":"|",
    "signedbv64":"(long long int)", "signedbv32":"(int)", "unsignedbv32":"(unsigned int)", "unsignedbv64":"(unsigned long long int)"
    }

def get_identifier(l_var):
    codes=l_var.split('..')[2]
    return codes.split('_')[-1]

def get_line_number(l_var):
    lnum=l_var.split('..')[1]
    if lnum=='Extra':
        return "0"
    return lnum

def get_var_name(l_var):
    return l_var.split('..')[-1]

def get_actual_var_name(l_var):
    return get_var_name(l_var).split('.E')[0].split('.S')[-1]

def remove_ssa_stuff(name):
    a=""
    i=0
    while (i<len(name)):
        if name[i]!='!':
            a+=name[i]
            i+=1
        elif (i+1)<len(name) and name[i+1]=='0' and (i+2)<len(name) and name[i+2]=='@':
            while i<len(name) and name[i] in ['0','1','2','3','4','5','6','7','8','9','@','#','!']:
                i+=1
        else:
            a+=name[i]
            i+=1
    return a

MODIFIED_EXPR={}

def add_unsat(lhs, rhs):
    code=get_identifier(lhs)
    if MODIFIED_EXPR.has_key(code)==False:
        MODIFIED_EXPR[code]=get_line_number(lhs)

    code=get_identifier(rhs)
    if MODIFIED_EXPR.has_key(code)==False:
        MODIFIED_EXPR[code]=get_line_number(rhs)
        

def process_unsat(line):
    #print line
    expr=line.split('Unsat: ')[1]
    expr=expr.split(' ')
    if expr[0]=="(or":
        return 0
    lhs=expr[1]
    rhs=expr[2].split(')')[0]
    if LOC_POS[lhs]==LOC_POS[rhs]:
        return 0
    add_unsat(lhs, rhs)
    return 1

IN_LOCS={}
OUT_LOCS={}
LOC_POS={}
POSSIBLE=['_in1','_in2','_in3', '_in4']
CONSTANTS={}
ENTRY_POINTS={}
NUM_OPS={}
EXTRAS={}

def is_location(var):
    return var.split('..')[0]=='L'

def is_comp_var(var):
    return var.split('..')[0]=='C'

def process_name(maps):
    var=maps[0]
    val=maps[1]
    if '..OPERATOR..' in var:
        if var[-4:] in POSSIBLE:
            IN_LOCS[var]=val
            if NUM_OPS.has_key(var[:-4])==False:
                NUM_OPS[var[:-4]]=0
            NUM_OPS[var[:-4]]+=1
        else:
            OUT_LOCS[val]=var

    else:
        var_name=get_var_name(var)
        if (var_name[:2]=='V_') or 'goto_symex.' in var_name:
            IN_LOCS[var]=val
            ENTRY_POINTS[get_identifier(var)]=var
        else:
            OUT_LOCS[val]=var

    LOC_POS[var]=val

def extra_variables(c_var_name):
    if '..Extra..' in c_var_name:
        code=c_var_name.split('..')[2].split('_')[1]
        name="L..Extra.."+code+".."+get_var_name(c_var_name)
        EXTRAS[c_var_name]=name

def add_constant(c_var_name, val):
    if '..Extra..' in c_var_name:
        code=c_var_name.split('..')[2].split('_')[1]
        name="L..Extra.."+code+".."+get_var_name(c_var_name)
        CONSTANTS[name]=val
    else:
        name="L"+c_var_name[1:]
        CONSTANTS[name]=val
ANALYZE={}        

def process_model_line(line):
    maps=line[:-1].split(' -> ')
    if maps[0][:2]=='k!':
        return 0
    if maps[1][:2]=='#x':
        maps[1]=str(int(maps[1][2:], 16))

    if is_location(maps[0]):
        process_name(maps)
        if ANALYZE.has_key(maps[1])==False:
            ANALYZE[maps[1]]=[]
        ANALYZE[maps[1]]+=[maps[0]]
    elif is_comp_var(maps[0]):
        if get_var_name(maps[0])=='const':
            #print maps
            add_constant(maps[0],maps[1])
        extra_variables(maps[0])
        

def get_operator(l_var):
    name=l_var.split('..')[-1].split('__')[-1]
    return OP_CONVERSIONS[name]

COMMENTS={}
def process_comment(v):
    c=v[3:]
    f=c.find('_')
    COMMENTS[c[:f]]=remove_ssa_stuff(c[f+1:])
    
def read_comments(c):
    v=c.readline()
    while(v!=''):
        v=v.strip('\n')
        if v[:3]==";#@":
            process_comment(v)
        v=c.readline()
        
def Lval2Prog(expr):
    #print expr
    if '..OPERATOR..' in expr:
        if NUM_OPS[expr]==1:
            return '('+get_operator(expr)+')('+Lval2Prog(OUT_LOCS[IN_LOCS[expr+'_in1']])+')'
        else:
            lhs=Lval2Prog(OUT_LOCS[IN_LOCS[expr+'_in1']])
            rhs=Lval2Prog(OUT_LOCS[IN_LOCS[expr+'_in2']])
            return '('+lhs+get_operator(expr)+rhs+')'
    else:
        if get_var_name(expr)=='const':
            return CONSTANTS[expr]
        else:
            return get_actual_var_name(expr)

    
def reform_expressions():
    for i in MODIFIED_EXPR:
        comment=COMMENTS[i]
        print "Correction around line "+MODIFIED_EXPR[i]+" in place of "+comment
        print comment.split('=')[0]+'='+Lval2Prog(OUT_LOCS[IN_LOCS[ENTRY_POINTS[i]]])
        

def process_model(f):
    v=f.readline()
    unsats=[]
    while(v[:7]!='result:'):
        while(v[:6]=='Unsat:'):
            unsats+=[v]
            v=f.readline()
        process_model_line(v)
        v=f.readline()
    for i in unsats:
        process_unsat(i)

def solve_file(f,c):
    process_model(f)
    read_comments(c)
    reform_expressions()
    
if __name__ == "__main__":
  f=open("smt1_out", "r")
  c=open("directfix-out", "r")
  solve_file(f,c)
    
    
