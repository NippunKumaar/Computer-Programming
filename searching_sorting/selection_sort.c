// Selection sort in C

#include <stdio.h>

// driver code
int main() {
  int data[] = {20, 12, 10, 15, 2};
  int size = sizeof(data) / sizeof(data[0]);
  int temp;

  for (int step = 0; step < size - 1; step++) {
      int min_idx = step;
      for (int i = step + 1; i < size; i++) {

        // To sort in descending order, change > to < in this line.
        // Select the minimum element in each loop.
        if (data[i] < data[min_idx])
          min_idx = i;
      }

      // put min at the correct position
      temp = data[min_idx];
      data[min_idx] = data[step];
      data[step] = temp;
    }
  printf("Sorted data in Acsending Order:\n");
  for (int i = 0; i < size; ++i) {
    printf("%d  ", data[i]);
  }
  printf("\n");
}