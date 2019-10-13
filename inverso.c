#include <stdio.h>

void reverse(int array[], int *size) {
  printf("Reverse of array is:\n");
  for(int i=*size-1;i>=0;i--)
    printf("%d ", array[i]);
  printf("\n");
}

int main() {
  int size;
  int array[256];

  printf("Insert array size (<256): ");
  scanf("%d", &size);

  for(int x=0;x<size;x++) {
    printf("Insert element of index %d: ", x);
    scanf("%d", &array[x]);
  }
  reverse(array, &size);
  return 0;
}
