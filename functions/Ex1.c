//Function with no argument and no Return value.

#include<stdio.h>

void sum(void);  //prototype

int main()
{
printf("Hello\n");
sum();                   // function call
printf("Bye\n");
}

void sum()                    // function definition
{
int a,b,c;
printf("Enter a and b\n");
scanf("%d %d", &a, &b);
c=a+b;
printf("Sum is %d\n",c);
}
