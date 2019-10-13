#include <stdio.h>

void exit(int status);

int main() {
  int num;

  FILE *fptr;
  fptr = fopen("programa.txt","w");

  if(fptr == NULL) {
    printf("Erro!");
    exit(1); }

  printf("Introduza um numero: ");
  scanf("%d",&num);
  fprintf(fptr,"%d\n",num);

  fclose(fptr);

  return 0;
}
