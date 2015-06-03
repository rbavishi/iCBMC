#include <stdio.h>
void func_void(char a, int b){
	int c = a + b;
}

int no_args() {
	int c = 2;
	int d = 3;
	return d+c;
}

int aux(int a, int b) {
	return a + b + 10;
}

int add (int a,int b) {
	int c = aux (a,b);
	c  = c + a;
	return c;
}
	
int main() {
	int a =10;
	int b = 20;
	func_void(a,b);
	int c = no_args();
	int d = add(a,b);
	__CPROVER_assert(a!=10, "");
	return 0;
}

