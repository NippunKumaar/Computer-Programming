/* This code takes in all the array elements from user and print the same*/
#include <stdio.h>

int main()
{
   int a[5], i;
   printf("Enter the elements of the Array");
   for(i=0;i<5;i++) {         //Loop for taking all the array elements
      scanf("%d", &a[i]);     
   }
   printf("The array values are:\n");
   for(i=0;i<5;i++) {         //Loop for printing all the array elements
      printf("%d", a[i]);
   }
   printf("\n");

}