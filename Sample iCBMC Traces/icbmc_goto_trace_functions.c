    //file functions.c line 22
    //Function Call: main();
int main() {
    //file functions.c line 23 function main
    signed int main___a;
    //file functions.c line 23 function main
    main___a = 10;
    //file functions.c line 24 function main
    signed int main___b;
    //file functions.c line 24 function main
    main___b = 20;
    //file functions.c line 25 function main
    //Function Call: func_void((char)a, b);
    //file functions.c line 25 function main
    char func_void___a___1;
    //file functions.c line 25 function main
    func_void___a___1 = (char)main___a;
    //file functions.c line 25 function main
    signed int func_void___b___1;
    //file functions.c line 25 function main
    func_void___b___1 = main___b;
    //file functions.c line 3 function func_void
    signed int func_void___c___1;
    //file functions.c line 3 function func_void
    func_void___c___1 = (signed int)func_void___a___1 + func_void___b___1;
    //file functions.c line 26 function main
    signed int main___c;
    //file functions.c line 26 function main
    //Function Call: no_args();
    //file functions.c line 7 function no_args
    signed int no_args___c___2;
    //file functions.c line 7 function no_args
    no_args___c___2 = 2;
    //file functions.c line 8 function no_args
    signed int no_args___d___2;
    //file functions.c line 8 function no_args
    no_args___d___2 = 3;
    //file functions.c line 9 function no_args
    signed int no_args___return_value___2;
    //file functions.c line 9 function no_args
    no_args___return_value___2 = no_args___d___2 + no_args___c___2;
    //file functions.c line 26 function main
    main___c = no_args___return_value___2;
    //file functions.c line 27 function main
    signed int main___d;
    //file functions.c line 27 function main
    //Function Call: add(a, b);
    //file functions.c line 27 function main
    signed int add___a___3;
    //file functions.c line 27 function main
    add___a___3 = main___a;
    //file functions.c line 27 function main
    signed int add___b___3;
    //file functions.c line 27 function main
    add___b___3 = main___b;
    //file functions.c line 17 function add
    signed int add___c___3;
    //file functions.c line 17 function add
    //Function Call: aux(a, b);
    //file functions.c line 17 function add
    signed int aux___a___4;
    //file functions.c line 17 function add
    aux___a___4 = add___a___3;
    //file functions.c line 17 function add
    signed int aux___b___4;
    //file functions.c line 17 function add
    aux___b___4 = add___b___3;
    //file functions.c line 13 function aux
    signed int aux___return_value___4;
    //file functions.c line 13 function aux
    aux___return_value___4 = aux___a___4 + aux___b___4 + 10;
    //file functions.c line 17 function add
    add___c___3 = aux___return_value___4;
    //file functions.c line 18 function add
    add___c___3 = add___c___3 + add___a___3;
    //file functions.c line 19 function add
    signed int add___return_value___3;
    //file functions.c line 19 function add
    add___return_value___3 = add___c___3;
    //file functions.c line 27 function main
    main___d = add___return_value___3;
    //file functions.c line 28 function main
    __CPROVER_assert(main___a != 10, "");
    return 0;
}
