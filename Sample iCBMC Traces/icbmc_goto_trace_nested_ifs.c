#include <stdio.h>
#include<stdlib.h>


    //file nested_ifs.c line 2
    //Function Call: main();
int main() {
    //file nested_ifs.c line 4 function main
    signed int main___i;
    //file nested_ifs.c line 4 function main
    signed int main___a;
    //file nested_ifs.c line 4 function main
    signed int main___b;
    //file nested_ifs.c line 5 function main
    main___i = 2;
    //file nested_ifs.c line 6 function main
    main___a = 3;
    //file nested_ifs.c line 7 function main
    main___b = 4;
    //file nested_ifs.c line 12 function main
    __CPROVER_assume(main___i > 1);
    //file nested_ifs.c line 12 function main
    __CPROVER_assume(main___a < 4);
    //file nested_ifs.c line 12 function main
    __CPROVER_assume(!(main___b == 5));
    //file nested_ifs.c line 18 function main
    main___b = main___b + 7;
    //file nested_ifs.c line 19 function main
    main___a = main___a + 5;
    //file nested_ifs.c line 20 function main
    main___i = main___i + 6;
    //file nested_ifs.c line 32 function main
    signed int main___d;
    //file nested_ifs.c line 32 function main
    main___d = 10;
    //file nested_ifs.c line 33 function main
    __CPROVER_assert(main___d < 10, "");
    return 0;
}
