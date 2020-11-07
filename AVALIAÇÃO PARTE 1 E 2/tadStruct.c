#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "TadStruct.h"

Vetor* v1;
Produto p =  {200,"ADAPTADOR BLUETOOTH CSR 5.0 DONGLE USB-P-PC",7.80};
Produto p1 = {521,"ADAPTADOR BLUETOOTH GOLINE 4.0 USB GL-BT10", 3.50};
Produto p2 = {345,"ADAPTADOR  BLUETOOTH GRIFFIN GF-100A USB-P-PC", 2.10};
Produto p3 = {217,"ADAPTADOR CONECTOR HDMI FEMEA/FEMEA22 ",3.00};
Produto p4 = {150,"ADAPTADOR PARA GABINETE BRACKET-125 2.5/3.5 HD NB / SSD",2.90};




void vet_criar_local(){//ok
 
 
  v1 = vet_criar();  

 
  if(v1 == NULL){
    printf("erro ao criar\n ");
  }else{
    printf("criado com sucesso\n");
  }
 }


void vet_inserirFim_local(){//ok

 vet_inserirFim(v1,p);
 vet_inserirFim(v1,p1);
 vet_inserirFim(v1,p2);
 vet_inserirFim(v1,p3);
 vet_inserirFim(v1,p4);
 // vet_inserirFim(v1,p5);
  //vet_inserirFim(v1,p7);
  //vet_inserirFim(v1,p8);
//vet_inserirFim(v1,p9);
//vet_inserirFim(v1,p10);
//vet_inserirFim(v1,p11);



 
}



//void vet_imprimir_local(){ //ok
  //vet_imprimir(v1);

//}

//void vet_inserir_local(){//ok

//vet_inserir(v1,p2,-4);
//vet_imprimir(v1);

//}


//void vet_substituir_local(){ OK

//vet_substituir(v1,0,p4);
//vet_imprimir(v1);

//}


//void vet_removerPosicao_local(){// OK

  //Produto x;
  //vet_removerPosicao(v1,0,&x);
  //vet_removerPosicao(v1,0,&x);
  //vet_removerPosicao(v1,0,&x);
  //vet_removerPosicao(v1,0,&x);
  //vet_removerPosicao(v1,0,&x);
  //vet_removerPosicao(v1,0,&x);
  //vet_removerPosicao(v1,0,&x);
  //vet_removerPosicao(v1,0,&x);
  //vet_removerPosicao(v1,0,&x);
//  vet_removerPosicao(v1,0,&x);
 

//vet_imprimir(v1);

  //printf("elemento removido %d %s %.2f\n",x.codigo, x.descricao, x.preco);
//}



//void vet_removerElemento_local(){

  //Produto remover =  {200,"ADAPTADOR BLUETOOTH CSR 5.0 DONGLE USB-P-PC",7.80};
  //int pos;

 // pos = vet_removerElemento(v1, remover);
 // printf("a posicao do elemento removida foi a %d\n",pos);
 // vet_imprimir(v1);
//}

//void vet_tamanho_local(){//ok

//int tam;
 //tam = vet_tamanho(v1);
 //printf("A struct tem %d elementos\n", tam);

//}



//void vet_elemento_local(){//ok

//Produto p6;
 //vet_elemento(v1, -1, &p6);
 //if(v1 == NULL){
   //printf("Voce informou a posicao errada\n");
 //}else{
   //      printf("o elemento encontrado foi  %d %s %.2f\n",p6.codigo,p6.descricao,p6.preco);
      

//}


//}



//void vet_posicao_local(){ //OK

//int posicao;
//posicao = vet_posicao(v1, p3);
//if(posicao < 0 ){
  //printf("Posição %d, esse valor não está no vetor\n",posicao);
//}else{
  //printf("a posicao do vetor é %d\n",posicao);

//}


//}

//void vet_destruir_local(){ //OK

 //vet_destruir(v1); 


//}
//void vet_toString_local(){ 

//char vet[500];
//vet_toString(v1, vet);

//printf("%s",vet);

//}


//void verifica_aumenta_local(){ // OK

//verifica_aumenta(v1);
//vet_imprimir(v1);

//}



//void verifica_diminui_local(){// ok

//verifica_diminui(v1);
//vet_imprimir(v1);


//}



//void vet_clone_local(){ //OK

//Vetor* vet2;

//vet2 = vet_clone(v1); 

//vet_imprimir(vet2);


//}

//void vet_ordenarBuble_local(){//OK
//vet_ordenarBuble(v1);
//vet_imprimir(v1);


//}


//void vet_ordenarSelection_local(){ //OK


  //vet_ordenarSelection(v1);

//}


//void vet_ordenarInsertion_local(){ //OK

  //  vet_ordenarInsertion(v1);
//}


//void vet_buscaBinaria_local(){ 
//vet_ordenarBuble(v1);

//Produto procurar = {200,"ADAPTADOR BLUETOOTH CSR 5.0 DONGLE USB-P-PC",7.80} ;
//int pos;
//pos = vet_buscaBinaria(v1,&procurar);
 //if(pos != -1){
  // printf("a posição que o elemento se encontra é a %d\n",pos);
 //}else{
   //  printf("Valor nao encontrado no array\n");
 //}


//}




 //void vet_importar_local(){

//char v5 = "input.txt";
 //vet_importar(v5);
 
 //}





int main(){


vet_criar_local();

 
vet_inserirFim_local();
//vet_imprimir_local();
//vet_inserir_local();
//vet_substituir_local();
//vet_removerElemento_local();
//vet_tamanho_local();
//vet_elemento_local();
//vet_posicao_local();
//vet_destruir_local();
//vet_toString_local();//
//verifica_aumenta_local();
//vet_removerPosicao_local();
//verifica_diminui_local();
//vet_clone_local();
//vet_ordenarBuble_local();
//vet_ordenarSelection_local();
//vet_ordenarInsertion_local();
//vet_buscaBinaria_local();
//vet_tamanho_local();
//vet_importar_local();


return 0;


   }


