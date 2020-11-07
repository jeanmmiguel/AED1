#include<stdio.h>
#include<stdlib.h>
#include "PilhaContigua.h"
//#include "PilhaEncadeada.h"

int main (){


Pilha* p = pilha_criar();

  
  if(p == NULL){
    printf ("erro ao criar ");
  }else{
    printf("Criado com sucesso\n");
  }
/*
pilha_empilhar(p,5);
pilha_empilhar(p,4);
pilha_empilhar(p,3);
pilha_empilhar(p,2);
pilha_empilhar(p,1);
*/

/*
pilha_empilhar(p,'C');
pilha_empilhar(p,'A');
pilha_empilhar(p,'S');
pilha_empilhar(p,'A');
*/

 //int remover;
 //char remover;

  
  //remover = pilha_desempilhar(p, &remover);
  //printf("valor desempilhado foi %d\n",remover);
  
//int topo;
//topo = pilha_topo(p,&topo);
//printf("elemento que esta no topo da pilha eh %d\n",topo);

  


//int tamanho;
//tamanho = pilha_tamanho(p);
//printf("tamanho da pilha é %d\n",tamanho);

//int topo;
//topo = pilha_topo(p,&topo);
//printf("elemento que esta no topo da pilha eh %d\n",topo);

/*
Pilha* clone;
clone = pilha_clone(p);
printf("Pilha clone \n");
pilha_imprimir(clone);

*/
//pilha_destruir(p);

pilha_inverter(p);
//pilha_imprimir(p);


TipoElemento vet[5] = {20,7,9,10,11};
pilha_empilharTodos(p,vet,5);
pilha_imprimir(pi);



return 0;


}
