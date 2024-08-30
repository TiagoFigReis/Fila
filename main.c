#include <stdio.h>
#include "fila.h"

int main(void) {
  tfila f;
  int num;
  iniciafila(&f);
  for(int i=0;i<5;i++){
    printf("Digite o dado:");
    scanf("%d",&num);
    if(!inserir(&f,num))
      return 0;
  }
  elementos(f);
  remover(&f);
  elementos(f);
  return 0;
}