#include <stdio.h>

int main() {
  int m1[2][2], m2[2][2];
  float msoma[2][2];
  int m,i,j,elem;

  for(m=1;m<3;m++) {
    if(m==1) printf("1a matriz\n");
    else printf("2a matriz\n");
    for(j=0;j<2;j++)
      for(i=0;i<2;i++) {
        printf("Introduza elemento da posicao %d %d: ", j+1,i+1);
        scanf("%d", &elem);
        if(m==1) m1[j][i] = elem;
        else m2[j][i] = elem;
      }
  }
  printf("\nMatriz Soma:\n");

  for(i=0;i<2;i++)
    for(j=0;j<2;j++)
      msoma[i][j] = m1[i][j] + m2[i][j];

  printf("%f %f\n", msoma[0][0], msoma[0][1]);
  printf("%f %f\n", msoma[1][0], msoma[1][1]);

  return 0;
}
