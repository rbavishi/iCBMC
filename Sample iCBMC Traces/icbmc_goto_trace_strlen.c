    //file strlen.c line 2
    //Function Call: main();
int main() {
    //file strlen.c line 3 function main
    char main___b[13l]={ 'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', 10, 0 };
    //file strlen.c line 4 function main
    signed int main___c;    //file strlen.c line 4 function main
    unsigned long int main___return_values_strlen___1;    //file strlen.c line 4 function main
    const char *main___s;
    //file strlen.c line 4 function main
    main___s = main___b;
    //file strlen.c line 4 function main
    unsigned long int main___len;
    //file strlen.c line 4 function main
    main___len = (unsigned long int)0;
    //file strlen.c line 4 function main
    __CPROVER_assume((signed int)main___s[(signed long int)main___len] != 0);
    //file strlen.c line 4 function main
    main___len = main___len + 1ul;
    //file strlen.c line 4 function main
    __CPROVER_assume((signed int)main___s[(signed long int)main___len] != 0);
    //file strlen.c line 4 function main
    main___len = main___len + 1ul;
    //file strlen.c line 4 function main
    __CPROVER_assume((signed int)main___s[(signed long int)main___len] != 0);
    //file strlen.c line 4 function main
    main___len = main___len + 1ul;
    //file strlen.c line 4 function main
    __CPROVER_assume((signed int)main___s[(signed long int)main___len] != 0);
    //file strlen.c line 4 function main
    main___len = main___len + 1ul;
    //file strlen.c line 4 function main
    __CPROVER_assume((signed int)main___s[(signed long int)main___len] != 0);
    //file strlen.c line 4 function main
    main___len = main___len + 1ul;
    //file strlen.c line 4 function main
    __CPROVER_assume((signed int)main___s[(signed long int)main___len] != 0);
    //file strlen.c line 4 function main
    main___len = main___len + 1ul;
    //file strlen.c line 4 function main
    __CPROVER_assume((signed int)main___s[(signed long int)main___len] != 0);
    //file strlen.c line 4 function main
    main___len = main___len + 1ul;
    //file strlen.c line 4 function main
    __CPROVER_assume((signed int)main___s[(signed long int)main___len] != 0);
    //file strlen.c line 4 function main
    main___len = main___len + 1ul;
    //file strlen.c line 4 function main
    __CPROVER_assume((signed int)main___s[(signed long int)main___len] != 0);
    //file strlen.c line 4 function main
    main___len = main___len + 1ul;
    //file strlen.c line 4 function main
    __CPROVER_assume((signed int)main___s[(signed long int)main___len] != 0);
    //file strlen.c line 4 function main
    main___len = main___len + 1ul;
    //file strlen.c line 4 function main
    __CPROVER_assume((signed int)main___s[(signed long int)main___len] != 0);
    //file strlen.c line 4 function main
    main___len = main___len + 1ul;
    //file strlen.c line 4 function main
    __CPROVER_assume((signed int)main___s[(signed long int)main___len] != 0);
    //file strlen.c line 4 function main
    main___len = main___len + 1ul;
    //file strlen.c line 4 function main
    __CPROVER_assume(!((signed int)main___s[(signed long int)main___len] != 0));
    //file strlen.c line 4 function main
    main___return_values_strlen___1 = main___len;
    //file strlen.c line 4 function main
    main___c = (signed int)main___return_values_strlen___1;
    //file strlen.c line 5 function main
    signed int main___d;
    //file strlen.c line 5 function main
    main___d = 10;
    //file strlen.c line 6 function main
    __CPROVER_assert(main___d < 10, "");
    return 0;
}
