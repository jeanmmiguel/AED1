#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tadVetor.h"

Vetor* v1;

void vet_criar_local(){
 
  v1 = vet_criar();  

 
  if(v1 == NULL){
    printf("erro ao criar\n ");
  }else{
    printf("criado com sucesso\n");
  }

}

void vet_inserirFim_local(){

 vet_inserirFim(v1, 10);
 vet_inserirFim(v1, 20);
 vet_inserirFim(v1, 30);
 vet_inserirFim(v1, 40);
 vet_inserirFim(v1, 50);
 vet_inserirFim(v1, 60);
}

void vet_imprimir_local(){ 
  vet_imprimir(v1);
}

void vet_inserir_local(){

vet_inserir(v1,877,-3);
vet_imprimir(v1);

}
void vet_substituir_local(){

vet_substituir(v1,-8,96);
vet_imprimir(v1);

}
void vet_removerPosicao_local(){

  int x;
  vet_removerPosicao(v1,0,&x);
  vet_removerPosicao(v1,0,&x);
  vet_removerPosicao(v1,0,&x);
  printf("elemento removido %d\n",x);
}
void vet_removerElemento_local(){

int pos; 
  pos = vet_removerElemento(v1, 50);
  printf("a posicao do elemento removida foi a %d\n",pos);
}

void vet_tamanho_local(){

int tam;
 tam = vet_tamanho(v1);
 printf("O  vetor tem %d elementos\n", tam);

}


void vet_elemento_local(){

int saida;
 vet_elemento(v1, 8, &saida);
 if(saida == 0){
   printf("Voce informou a posicao errada\n");
 }else{
    printf("o elemento encontrado na posicao  foi  o %d\n",saida);

}


}

void vet_posicao_local(){

int posicao;
posicao = vet_posicao(v1, 15);
if(posicao < 0 ){
  printf("Posição %d, esse valor não está no vetor\n",posicao);
}else{
  printf("a posicao do vetor é %d\n",posicao);

}


}

void vet_destruir_local(){

 vet_destruir(v1); 


}

void verifica_aumenta_local(){

verifica_aumenta(v1);
vet_imprimir(v1);

}

void vet_toString_local(){

char string[400];
vet_toString(v1, string);
printf("%s",string);


}

void verifica_diminui_local(){

verifica_diminui(v1);
vet_imprimir(v1);



}

void vet_clone_local(){

Vetor* vet2;
vet2 = vet_clone(v1); 
vet_imprimir(vet2);


}

void vet_ordenarBuble_local(){
vet_ordenarBuble(v1);
vet_imprimir(v1);


}

void vet_criarAleatorio_local(){
   vet_criarAleatorio(5);





}

void vet_criarAscendente_local(){

  vet_criarAscendente(5);
}

void vet_criarDescendente_local(){
vet_criarDescendente(5);

  
}
void vet_buscaBinaria_local(){

int pos;
pos = vet_buscaBinaria(v1,40);
 if(pos != -1){
   printf("a posição que o elemento se encontra é a %d\n",pos);


 }else{
     printf("Valor nao encontrado no array\n");
 }


}
void vet_criarAscendenteParcial_local(){

vet_criarAscendenteParcial(10, 50);

}
void vet_ordenarSelection_local(){


  vet_ordenarSelection(v1);

}

void vet_ordenarInsertion_local(){

    vet_ordenarInsertion(v1);
}

 void vet_importar_local(){
 
char string [300] = "entrada.txt";

vet_importar(string);


 }


void vet_exportar_local(){

char str[500];

vet_exportar(v1,str);

vet_imprimir(v1);

}







int main(){


vet_criar_local();
vet_inserirFim_local();
//vet_imprimir_local();
//vet_toString_local();
vet_importar_local();
//vet_exportar_local();
/*
vet_inserir_local();
vet_substituir_local();
vet_removerPosicao_local();
vet_removerElemento_local();
vet_tamanho_local();
vet_elemento_local();
vet_posicao_local();
//vet_destruir_local();
verifica_aumenta_local();
verifica_diminui_local();
vet_clone_local();
vet_ordenarBuble_local();
vet_criarAleatorio_local();
vet_criarAscendente_local();
vet_criarDescendente_local();
vet_buscaBinaria_local();
vet_criarAscendenteParcial_local();
vet_ordenarSelection_local();
vet_ordenarInsertion_local();

  
*/



 }