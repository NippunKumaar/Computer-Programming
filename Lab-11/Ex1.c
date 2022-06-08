// program to read an integer, float and char value , print the addresses of those values.

#include <stdio.h>

int main()
{
	int a;
	float b;
	char c;
	int * ap;
	float * bp;
	char * cp;

	printf("Enter an interger value:");
	scanf("%d",&a);
	printf("Enter an float value:");
	scanf("%f`",&b);
	printf("Enter an char value:"); 
	scanf(" %c",&c); //Note give a space before %c no ignore the white space

	ap = &a;
	bp = &b;
	cp = &c;

	printf("Address of integer %d is %p\n", *ap, ap);
	printf("Address of float %f is %p\n", *bp, bp);
	printf("Address of char %c is %p\n", *cp, cp);

}
