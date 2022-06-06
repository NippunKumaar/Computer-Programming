// Array of Pointers

#include <stdio.h>

const int MAX = 3;

int main ()
{
int var[] = {10, 100, 200};
int i;
int *ptr[MAX];

for ( i = 0; i < MAX; i++) {
ptr[i] = &var[i]; /* assign the address of integer. */	
printf("Value of var[%d] = %d\n", i, *ptr[i] );
}
}

