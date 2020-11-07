#include <stdio.h>
#include <stdlib.h>
#include "tadVetor.h"


int main(){


  Vetor* v1 = vet_criar();
  //Vetor* v2 = vet_criar();

  vet_inserirFim(v1, 5);
  vet_inserirFim(v1, 10);
  vet_inserirFim(v1, 15);
 

 // vet_inserirFim(v2, 40);
  //vet_inserirFim(v2, 100);
  //vet_inserirFim(v2, 200);
  
  //vet_inserir(v1,877,0);
  //vet_substituir(v1,0,96);
  
  int x;
  vet_removerPosicao(v1,0,&x);
  printf("elemento removido %d\n",x);

  int pos;
  pos = vet_removerElemento(v1, 5);
  printf("a posicao do elemento removida foi a %d\n",pos);

// TERMINAR int* vetor;
//vetor = (int*) malloc(3,sizeof(int));
//vetor = vet_posicao_repetidas(v1,5);

int a;
a = vet_desalocar(v1);
if(a == 0){
  printf("desalocar deu certo\n");
}else{
  printf("desalocar deu errado");
}




int tam;
 tam = vet_tamanho(v1);
 printf("O  vetor tem %d elementos\n", tam);

int saida;
 vet_elemento(v1, 1, &saida);
 if(saida == 0){
   printf("Voce informou a posicao errada\n");
 }else{
    printf("o elemento encontrado na posicao  foi  o %d\n",saida);

}


int posicao;
posicao = vet_posicao(v1, 15);
if(posicao < 0 ){
  printf("Posição %d, esse valor não está no vetor\n",posicao);
}else{
  printf("a posicao do vetor é %d\n",posicao);

}



  //vet_imprimir(v1); //[10,20,30]
  //vet_imprimir(v2); 

  

  vet_desalocar(v1);
 //vet_desalocar(v2);

  
}