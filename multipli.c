#include <stdio.h>

int main() {
  int l1,l2,c1,c2;
  int i,j,el;

  printf("Introduza numero de linhas e de colunas da primeira matriz: ");
  scanf("%d %d\n", &l1, &c1);

  printf("Introduza numero de linhas e de colunas da segunda matriz: ");
  scanf("%d %d\n", &l2, &c2);

  int m1[l1][c1];
  int m2[l2][c2];

  printf("Introduza os elementos da matriz 1:\n");
  for(i=0;i<l1;i++)
    for(j=0;j<c1;j++) {
      printf("Posicao %d %d: ", i+1, j+1);
      scanf("%d\n", &el);
      m1[i][j] = el;
    }

  printf("Introduza os elementos da matriz 2:\n");
  for(i=0;i<l1;i++)
    for(j=0;j<c1;j++) {
      printf("Posicao %d %d: ", i+1, j+1);
      scanf("%d\n", &el);
      m2[i][j] = el;
    }

  return 0;
}
