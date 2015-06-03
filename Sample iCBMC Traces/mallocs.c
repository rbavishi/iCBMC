#include<stdio.h>
#include<stdlib.h>
int main() {
	int *p = (int *)malloc(sizeof(int)*4);
	p[1]=2;
	p[0]=3;
	int a = 10;
	__CPROVER_assert(a<10,"");
	return 0;
}

