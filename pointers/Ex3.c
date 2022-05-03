//Accesing data via pointer

#include <stdio.h>
int main()
{
int x, y;
int *ptr;

x = 10 ;
ptr = &x ;
y = *ptr ;

printf ("%d is stored in location %p \n", x, &x) ;
printf ("%d is stored in location %p \n", *&x, &x) ;
printf ("%d is stored in location %p \n", *ptr, ptr) ;
printf ("%d is stored in location %p \n", y, &*ptr) ;
printf ("%p is stored in location %p \n", ptr, &ptr) ;
printf ("%d is stored in location %p \n", y, &y) ;
*ptr = 25;
printf ("\nNow x = %d \n", x);
}