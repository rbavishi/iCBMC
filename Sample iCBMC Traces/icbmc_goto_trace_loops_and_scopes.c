    //file loops_and_scopes.c line 2
    //Function Call: main();
int main() {
    //file loops_and_scopes.c line 3 function main
    signed int main___c;
    //file loops_and_scopes.c line 3 function main
    main___c = 10;
    //file loops_and_scopes.c line 4 function main
    signed int main___i;
    //file loops_and_scopes.c line 4 function main
    main___i = 0;
    //file loops_and_scopes.c line 5 function main
    signed int main___a;
    //file loops_and_scopes.c line 5 function main
    main___a = 2;
    //file loops_and_scopes.c line 6 function main
    main___i = 0;
    //file loops_and_scopes.c line 7 function main
    __CPROVER_assume(main___i < 2);
    //file loops_and_scopes.c line 7 function main
    signed int main___c___1;
    //file loops_and_scopes.c line 7 function main
    main___c___1 = 2;
    //file loops_and_scopes.c line 9 function main
    __CPROVER_assume(main___c___1 == 2);
    //file loops_and_scopes.c line 9 function main
    signed int main___c___2;
    //file loops_and_scopes.c line 9 function main
    main___c___2 = 3;
    //file loops_and_scopes.c line 10 function main
    main___a = main___c___2;
    //file loops_and_scopes.c line 12 function main
    main___c___1 = 4;
    //file loops_and_scopes.c line 6 function main
    main___i = main___i + 1;
    //file loops_and_scopes.c line 7 function main
    __CPROVER_assume(main___i < 2);
    //file loops_and_scopes.c line 7 function main
    signed int main___c___3;
    //file loops_and_scopes.c line 7 function main
    main___c___3 = 2;
    //file loops_and_scopes.c line 9 function main
    __CPROVER_assume(main___c___3 == 2);
    //file loops_and_scopes.c line 9 function main
    signed int main___c___4;
    //file loops_and_scopes.c line 9 function main
    main___c___4 = 3;
    //file loops_and_scopes.c line 10 function main
    main___a = main___c___4;
    //file loops_and_scopes.c line 12 function main
    main___c___3 = 4;
    //file loops_and_scopes.c line 6 function main
    main___i = main___i + 1;
    //file loops_and_scopes.c line 6 function main
    __CPROVER_assume(!(main___i < 2));
    //file loops_and_scopes.c line 14 function main
    main___c = 11;
    //file loops_and_scopes.c line 15 function main
    __CPROVER_assert(main___a != 3, "");

}
