#include<stdio.h>
#include<stdlib.h>

int main(int argc,char* argv[])
{
	int a, b;
	int sum;
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	sum = a+b;
	printf("Sum is %d\n",sum);
}