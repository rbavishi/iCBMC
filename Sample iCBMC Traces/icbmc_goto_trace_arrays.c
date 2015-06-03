    //file arrays.c line 2
    //Function Call: main();
int main() {
    //file arrays.c line 3 function main
    signed int main___a[5l]={ 1, 2, 3, 4, 5 };
    //file arrays.c line 4 function main
    char main___c[6l]={ 'H', 'e', 'l', 'l', 'o', 0 };
    //file arrays.c line 5 function main
    signed int main___b[5l];
    //file arrays.c line 6 function main
    main___b[(signed long int)0] = 1;
    //file arrays.c line 7 function main
    signed int main___d;
    //file arrays.c line 7 function main
    main___d = 10;
    //file arrays.c line 8 function main
    __CPROVER_assert(main___d < 10, "");
    return 0;
}
