//testeFila.c

#include<stdio.h>
#include<stdlib.h>
#include "Filaprioridade.h"


int main(){


  FilaPrioridade* fi = filaP_criar();
 

  filaP_inserir(fi,10);
  filaP_inserir(fi,9);
  filaP_inserir(fi,4);
  filaP_inserir(fi,7);
  filaP_inserir(fi,8);
  filaP_inserir(fi,3);
  filaP_inserir(fi,2);
  filaP_inserir(fi,6);
  filaP_inserir(fi,1);
  filaP_inserir(fi,5);
  



  filaP_imprimir(fi);

  int size;
 size = filaP_tamanho(fi); 
 printf("tamanho fila %d",size);
 printf("\n");

 int a;
 a = filaP_vazia(fi);
 if(a == 1){
   printf("fila vazia\n");
 }

//filaP_clone(fi);

int vetor[5] ={1,2,3,4,5};
filaP_inserirTodos(fi,vetor, 5);
filaP_imprimir(fi);

int h;
while(!filaP_vazia(fi)){
  filaP_remover(fi,&h);
  printf("elemento removido %d \n",h);

}
filaP_imprimir(fi);



return 0;




}