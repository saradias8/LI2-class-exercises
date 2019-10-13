#include <stdio.h>

int main() {
  int array[2][7];
  int i,j,temp;

  for(i=0;i<2;i++)
    for(j=0;j<7;j++) {
      printf("Cidade %d, Dia %d: ", i+1, j+1);
      scanf("%d", &temp);
      array[i][j] = temp;
    }
  printf("\nValores de temperatura registados:\n\n");

  for(i=0;i<2;i++)
    for(j=0;j<7;j++) {
      printf("Cidade %d, Dia %d = %d\n", i+1,j+1,array[i][j]);
    }
  return 0;
}
