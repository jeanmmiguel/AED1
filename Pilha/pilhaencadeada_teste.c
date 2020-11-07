#include<stdio.h>
#include<stdlib.h>
//#include "PilhaContigua.h"
#include "PilhaEncadeada.h"


int main (){

Pilha* pi= pilha_criar();

if(pi == NULL){
    printf("Erro ao criar pilha\n");
}else{
    printf("pilha criada com sucesso\n");
}

//pilha_destruir(pi);

pilha_empilhar(pi,10);
pilha_empilhar(pi,20);
pilha_empilhar(pi,30);
pilha_empilhar(pi,40);
pilha_empilhar(pi,50);



//pilha_imprimir(pi);

//int x;
//pilha_desempilhar(pi,&x);
//pilha_desempilhar(pi,&x);
//printf("elemento removido %d\n",x);
//pilha_imprimir(pi);

int elemento;
pilha_topo(pi,&elemento);
printf("O elemento que esta no topo é %d\n",elemento);

int size;
size = pilha_tamanho(pi);
printf("Tamanho da pilha %d\n",size);


//Pilha* clone;
//clone = pilha_clone(pi);
//printf("pilha clone\n");
//pilha_imprimir(clone);

printf("pilha inversa");
pilha_inverter(pi);
pilha_imprimir(pi);

//int vet[5] = {1,2,3,4,5};
//pilha_empilharTodos(pi,vet,5);
//printf("empilhar todos\n");
//pilha_imprimir(pi);




 }