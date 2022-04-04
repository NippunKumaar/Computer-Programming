// Insertion sort in C

#include <stdio.h>

int main() {
  int data[] = {9, 5, 1, 4, 3};
  int size = sizeof(data) / sizeof(data[0]);


for (int step = 1; step < size; step++) {
    int key = data[step];
    int j = step - 1;

    // Compare key with each element on the left of it until an element smaller than
    // it is found.
    // For descending order, change key<data[j] to key>data[j].
    while (key < data[j] && j >= 0) {
      data[j + 1] = data[j];
      --j;
    }
    data[j + 1] = key;
  }

  printf("Sorted data in ascending order:\n");
  for (int i = 0; i < size; i++) {
    printf("%d ", data[i]);
  }
  printf("\n");
}