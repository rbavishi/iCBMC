    //file icbmc_goto_trace_arrays.c line 3
    //Function Call: main();
int main() {
    //file icbmc_goto_trace_arrays.c line 5 function main
    signed int main___main___a[5l]={ 1, 2, 3, 4, 5 };
    //file icbmc_goto_trace_arrays.c line 7 function main
    char main___main___c[6l]={ (char)72, (char)101, (char)108, (char)108, (char)111, (char)0 };
    //file icbmc_goto_trace_arrays.c line 9 function main
    signed int main___main___b[5l];
//file icbmc_goto_trace_arrays.c line 11 function main
    main___main___b[(signed long int)0] = 1;
    //file icbmc_goto_trace_arrays.c line 13 function main
    signed int main___main___d;
//file icbmc_goto_trace_arrays.c line 15 function main
    main___main___d = 10;
    //file icbmc_goto_trace_arrays.c line 17 function main
    __CPROVER_assert(main___main___d < 10, "");
    return 0;
}
