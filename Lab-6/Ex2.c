//Read an array of n integers and display them. Find the sum of elements in the array. Also display the elements in reverse order.
#include <stdio.h>

int main()
{
   int  i;
   int n=0, sum=0;
   int a[n];
   printf("Enter the number of array elements\n");
   scanf("%d",&n);
   printf("Enter the elements of the Array");
   for(i=0;i<n;i++) {         //Loop for taking all the array elements
      scanf("%d", &a[i]);     
   }
   printf("The array values are:\n");
   printf("[ ");
   for(i=0;i<n;i++) {         //Loop for printing all the array elements ans calculating sum
      printf("%d ", a[i]);
      sum += a[i];
   }
   printf("]\n");
   printf("Sum:%d\n", sum);

   for(i=n-1;i>=0;i--) {         //Loop for printing in reverse order
      printf("%d ", a[i]);
   }
}