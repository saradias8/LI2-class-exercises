#include <stdio.h>

int main() {
  int num;

  FILE *fptr;
  fptr = fopen("programa.txt","r");
  
  fscanf(fptr,"%d",&num);
  printf("Valor n=%d\n",num);

  return 0;
}
