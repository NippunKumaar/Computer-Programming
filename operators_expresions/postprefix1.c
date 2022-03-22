#include <stdio.h>

int main()
{
	int a = 1;
	int b = 0;
	int c = 0;
	b = ++a;
	c = a++;
	printf("b:%d\n",b);
	printf("c:%d\n",c);
	printf("a:%d\n",a);
}
