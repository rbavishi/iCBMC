#include <stdio.h>
int main() {
	int c = 10;
	int i=0;
	int a = 2;
	for (i=0; i<2; i++) {
		int c = 2;
		if (c == 2) {
			int c = 3;
			a = c;
		}
		c = 4;
	}
	c= 11;
	__CPROVER_assert(a!=3, "");
	return 0;
}

