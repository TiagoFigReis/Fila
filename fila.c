#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

void iniciafila(tfila *f){
  f->com=NULL;
  f->fim=NULL;
}
int filavazia(tfila f){
  if(!f.com)
    return 1;
  return 0;
}
int inserir(tfila *f,int n){
  tno *no;
  no=(tno*)malloc(sizeof(tno));
  if(!no)
    return 0;
  no->dado=n;
  if(filavazia(*f)){
    f->com=no;
    f->fim=no;
  }else{ 
  f->fim->prox=no;
  f->fim=no;
  }
  return 1;
}
int remover (tfila *f){
  tno *no;
  int n;
  if(filavazia(*f))
    return 0;
  no=f->com;
  n=no->dado;
  f->com=no->prox;
  free(no);
  return n;
}
void elementos(tfila f){
  if(!f.com)
    return;
  while(f.com){
    printf("%d\n",f.com->dado);
    f.com=f.com->prox;
  }
}