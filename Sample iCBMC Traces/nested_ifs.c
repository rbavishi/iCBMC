#include<stdio.h>
int main()
{
	int i,a,b;
	i=2;
	a=3;
	b=4;
	if (i>1)
	{
		if (a<4)
		{
			if (b==5) {
				b = b + 2;
				a = a +3;
				i = i +4;
			}
			else {
				b = b + 7;
				a = a +5;
				i = i +6;
			}
		}
		else {
			if (b<4) {
				b = b + 8;
			}
			else {
				b = b + 9;
			}
		}
	}
	int d = 10;
	__CPROVER_assert(d<10,"");
	return 0;
}
