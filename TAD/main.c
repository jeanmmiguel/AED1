//tadData_teste.c

#include<stdio.h>
#include<stdlib.h>
#include "tadData.h"

int main(){
	// Desenvolva os testes para verificar se a função implementada 
  //está funcionando como esperado

   Data* d1;
   d1 = data_criar1(30, 11, 2020);
    if(d1 == NULL ){
    
     printf("Data invalida\n ");
     printf("Exemplo de data válida: 25 07 2020 \n ");

    return 0;

    }
 
  
    //Data* d2 = data_copia(d1);

    
    //d2 = data_alterar(20, 11, 2025, d2);
    
   
    data_imprimir(d1);
    //data_imprimir(d2);

    //char dataHoje[12];

    //data_toStringBR(d1, dataHoje);
    //printf("data formato br %s\n", dataHoje);

    //char dataNova[12];
    //data_toStringEUA(d1,dataNova);
    //printf("data formato americano %s\n",dataNova);

    //char dia[3];
    //data_recupera_dia(d1);
    //printf("%s",dia);

  char d[3];
  data_recupera_dia(d1);
  printf("o dia é %s", d);





}