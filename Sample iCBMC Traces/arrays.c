#include<stdio.h>
int main() {
	int a[]={1,2,3,4,5};
	char c[]="Hello";
	int b[5];
	b[0]=1;
	int d = 10;
	__CPROVER_assert(d<10,"");
	return 0;
}
