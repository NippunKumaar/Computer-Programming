//Function with no argument and a Return value

#include<stdio.h>

int sum(void);  //prototype

int main()
{
int res;
printf("Hello\n");
res=sum();  // function call is sum() and the returned value is stored in res of the calling  function
printf("Sum is %d\n",res);
printf("Bye\n");
}

int sum()                    // function definition
{
int a, b, c;
printf("Enter a and b\n");
scanf("%d%d", &a, &b);
c=a+b;
return c;              // value in c is returned to the calling function.
}
