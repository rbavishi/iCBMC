#include<string.h>
int main() {
	char b[]= "Hello World\n";
	int c = strlen(b);
	int d = 10;
	__CPROVER_assert(d<10,"");
	return 0;
}
