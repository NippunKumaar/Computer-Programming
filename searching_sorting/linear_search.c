// Linear Search in C

#include <stdio.h>

int main() 
{
  int array[] = {2, 4, 0, 1, 9};
  int x = 9;
  int n = sizeof(array) / sizeof(array[0]);
  int result = -1;

 for (int i = 0; i < n; i++)
    if (array[i] == x)
    {
       result = i;
       break;
    }

  (result == -1) ? printf("Element not found\n") : printf("Element found at index: %d\n", result);
}