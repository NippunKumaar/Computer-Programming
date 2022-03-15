/* This code takes in all the array elements from user. Adds all the elements and print the same*/

#include<stdio.h>

int main()
{
	int data[5];
	int i;
	int sum = 0;
	printf("Enter the elements of the Array");
   for(i=0;i<5;i++) {         //Loop for taking all the array elements
      scanf("%d", &data[i]);     
   }
   for(i=0;i<5;i++) {         //Loop for adding all the array elements
      sum += data[i];
   }
   printf("The sum of the array is: %d\n",sum);	
}