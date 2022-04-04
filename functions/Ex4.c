//Function with argument and Return value

#include<stdio.h>

int sum(int, int);  //prototype

int main()
{
int a=2, b=3, res;
printf("Hello\n");
res = sum(a,b);                   // function call
printf("Sum is %d\n", res);
printf("Bye\n");
}

int sum(int x, int y)                    // function definition
{
int z;
z=x+y;
return z;                  // returning the z value  to the calling function.
}