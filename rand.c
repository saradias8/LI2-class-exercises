#include <stdio.h>
#include <limits.h>

int rand(void);

int rand_between(int min, int max) {
  return rand() % (max -min) + min;
}

float average(int *array, int *size) {
  int sum=0;
  float media;

  for(int i =0;i<*size;i++)
    sum += array[i];

  media = sum / (float) *size;
  return media;
}
/*
int rem(int array[], int *val, int *size) {
  int new[256];
  for(int i=0, t=0; i<*size; i++)
    if(array[i] != *val) new[t] = array[i];
  return *new;
}

void repetidos(int array[], int *size) {
  for(int i=0; i<*size;i++) {
    int count;
    for(int x=1;x<*size;x++) {
      if(array[i] == array[x]) {
        count++;
        rem(array,&array[i],size);
      }
    }
    if((count-1)!=1)
      printf("%d has %d duplicates\n", array[i], count);
    else printf("%d has 1 duplicate\n", array[i]);
  }
}
*/
int main() {
  int max,min;
  int size;
  int array[256], all[256];

  printf("Insert array size (<256): ");
  scanf("%d", &size);

  printf("Insert range(min,max): ");
  scanf("%d %d", &min,&max);

  for(int i =0;i<size;i++) {
    printf("%d ", rand_between(min,max));
    all[i] = rand_between(min,max);
  }
  printf("\naverage: %f\n", average(all,&size));
  //repetidos(all,&size);

  return 0;
}
