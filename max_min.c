#include <stdio.h>

void max_min(int array[], int *size) {
  int min=array[0], max=array[0];
  for(int i=0; i<*size; i++) {
    if(array[i]>max) max=array[i];
    if(array[i]<min) min=array[i];
  }
  printf("Max: %d Min: %d\n", max,min);
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
  max_min(array, &size);
  return 0;
}
