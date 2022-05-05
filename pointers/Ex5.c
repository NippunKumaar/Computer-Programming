//Pointer decrement example

#include <stdio.h>
int MAX = 3;
int main ()
{
int var[] = {10, 100, 200};
int i, *ptr;	/* let us have array address in pointer */
ptr = &var[2];
for ( i = MAX; i > 0; i--){
	printf("Address of var[%d] = %p\n", i, ptr );
	printf("Value of var[%d] = %d\n", i, *ptr ); /* move to the previous location */
	ptr--;
}
}