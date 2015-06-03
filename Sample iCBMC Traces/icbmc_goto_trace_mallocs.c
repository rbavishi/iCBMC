    //file mallocs.c line 3
    //Function Call: main();
int main() {
    //file mallocs.c line 4 function main
    signed int *main___p;
    //file mallocs.c line 4 function main
    void *main___return_values_malloc___1;
    //file mallocs.c line 4 function main
    unsigned long int main___malloc_size;
    //file mallocs.c line 4 function main
    main___malloc_size = sizeof(signed int) /*4ul*/  * (unsigned long int)4;
    //file mallocs.c line 4 function main
    void *main___res;
    //file mallocs.c line 4 function main
    void *main___malloc_value___1;
    //file mallocs.c line 4 function main
    main___malloc_value___1 = malloc(main___malloc_size);
    //file mallocs.c line 4 function main
    main___res = main___malloc_value___1;
    //file mallocs.c line 4 function main
    __CPROVER_deallocated = main___res == __CPROVER_deallocated ? NULL : __CPROVER_deallocated;
    //file mallocs.c line 4 function main
    _Bool main___record_malloc;
    //file mallocs.c line 4 function main
    __CPROVER_malloc_object = main___record_malloc ? main___res : __CPROVER_malloc_object;
    //file mallocs.c line 4 function main
    __CPROVER_malloc_size = main___record_malloc ? main___malloc_size : __CPROVER_malloc_size;
    //file mallocs.c line 4 function main
    __CPROVER_malloc_is_new_array = (main___record_malloc ? 0 : (signed int)__CPROVER_malloc_is_new_array) != 0;
    //file mallocs.c line 4 function main
    _Bool main___record_may_leak;
    //file mallocs.c line 4 function main
    __CPROVER_memory_leak = main___record_may_leak ? main___res : __CPROVER_memory_leak;
    //file mallocs.c line 4 function main
    main___return_values_malloc___1 = main___res;
    //file mallocs.c line 4 function main
    main___p = (signed int *)main___return_values_malloc___1;
    //file mallocs.c line 5 function main
    main___p[(signed long int)1] = 2;
    //file mallocs.c line 6 function main
    main___p[(signed long int)0] = 3;
    //file mallocs.c line 7 function main
    signed int main___a;
    //file mallocs.c line 7 function main
    main___a = 10;
    //file mallocs.c line 8 function main
    __CPROVER_assert(main___a < 10, "");
    return 0;
}
