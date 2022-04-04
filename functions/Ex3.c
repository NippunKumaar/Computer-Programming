//Function with argument and no Return value

#include<stdio.h>

void sum(int, int);  //prototype

int main()
{
int a=2, b=3;
printf("Hello\n");
sum(a,b);                   // function call
printf("Bye\n");
}

void sum(int x, int y)                    // function definition
{
int z;
z=x+y;
printf("Sum is %d\n",z);
}
