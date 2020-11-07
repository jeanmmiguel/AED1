//testeFila.c

#include<stdio.h>
#include<stdlib.h>
//#include "FilaCircular.h"
#include "FilaEncadeada.h"

int main(){

Fila* fi = fila_criar();

fila_inserir(fi,10);
fila_inserir(fi,2);
fila_inserir(fi,3);
fila_inserir(fi,4);
fila_inserir(fi,5);
fila_inserir(fi,6);
fila_inserir(fi,7);


int x;
fila_remover(fi,&x);
fila_imprimir(fi);
printf("elemento removido  %d\n",x);

int y;
fila_primeiro(fi,&y);
printf("primeiro da fila  %d\n",y);

int size;
size = fila_tamanho(fi);
printf("tamanho da fila  %d\n",size);

//fila_clone(fi);
//fila_inverter(fi);


int vet[5] = {10,20,30,40,50};
fila_inserirTodos(fi,vet,5);
fila_imprimir(fi);

int teste;
teste = fila_vazia(fi);
if(teste ==1){
    printf("A fila esta vazia");
}

//int teste2;
//teste2 =  fila_cheia(fi);
//if(teste2 != 0 ){
  //  printf("A fila esta cheia");
//}

return 0;

}