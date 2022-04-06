// Linear Search in C using functions

#include <stdio.h>

int linear_search(int [], int, int);

int main() 
{
  int array[] = {2, 4, 0, 1, 9};
  int x = 9;
  int n = sizeof(array) / sizeof(array[0]);
  int result;
  result = linear_search(array, n, x);
  (result == -1) ? printf("Element not found\n") : printf("Element found at index: %d\n", result);
}

int linear_search(int array[], int n, int x)
{

   for (int i = 0; i < n; i++){
    if (array[i] == x)
    {
       return i;
    }
   }
   return -1;


}