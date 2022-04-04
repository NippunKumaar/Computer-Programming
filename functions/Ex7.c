#include<stdio.h>

void sum(int, int);
void sq(int);

int main()
{
    sum(2,3);
}

void sum(int x, int y)
{
    int res1;
    res1=x+y;
    printf("res1=%d\n",res1);
    sq(x);
}

void sq(int a)
{
    int res2;
    res2=a*a;
    printf("res2=%d\n", res2);
    
}
