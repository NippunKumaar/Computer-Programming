// Bubble sort in C

#include <stdio.h>

int main() {
  int data[] = {-2, 45, 0, 11, -9};
  
  // find the array's length
  int size = sizeof(data) / sizeof(data[0]);

   // loop to access each array element
  for (int step = 0; step < size - 1; ++step) {
      
    // loop to compare array elements
    for (int i = 0; i < size - step - 1; ++i) {
      
      // compare two adjacent elements
      // change > to < to sort in descending order
      if (data[i] > data[i + 1]) {
        
        // swapping occurs if elements
        // are not in the intended order
        int temp = data[i];
        data[i] = data[i + 1];
        data[i + 1] = temp;
      }
    }
  }
  
  printf("Sorted data in Ascending Order:\n");
    for (int i = 0; i < size; ++i) {
    printf("%d  ", data[i]);
  }
  printf("\n");

}