#include <stdio.h>

//05. Desenvolver um algoritmo para realizar operações em strings. As operações são:
//Calcular a quantidade de caracteres
//Criar uma cópia (copiar o conteúdo de uma string A para a string B)
//Inverter os caracteres
//Eliminar espaços em branco no início e no fim da string.
//Desenvolva uma função para cada operação solicitada selecionando uma forma de entrada e saída adequada. Não será permitido o uso das funções da biblioteca string.h. 


int QtdeCaracteres(char* string1){

    int aux=0, i = 0;

    for(i = 0; string1[i]!= '\0' ;i++){
       aux++;    
    }
     
    
    return aux;
}

void CopiaString(char *string1, char *string2){

    int i =0 , j=0 ;
    
    for(i = 0;string1[i]!= '\0';i++){
        string2[j] = string1[i];
         j++;
    }
    

}

void InverteString(char *string1, char *string3,int tamanho){

        int i = 0 , j = 0;

        for(i = QtdeCaracteres(string1)-1; i>=0;i--){

                 string3[j] = string1[i];
        
                j++;
        
        }
        string3[j] = '\0';
        
       
                 
        

}

void EliminaEspacos(char *string1, char *stirngnova){

     int i = 0 , j = 0, aux = 0 ;
     int posicao = 0;

 for (int i = 0, posicao = 0; i < 6; i++, posicao++) {
        if (string1[posicao] == ' ') posicao++;
        string1[i] = string1[posicao];


}

}


int main(void){

char string1[6] = " jean";
char string2[6];
char string3[6];
char stringnova[6];

int qtde  = QtdeCaracteres(string1);

CopiaString(string1,string2);
InverteString(string1,string3,5);
EliminaEspacos(string1,stringnova);

printf("a string tem %d caracteres\n", qtde);
printf(" string 1: %s \n",string1);
printf(" string 2: %s \n",string2);

printf("string invertida %s:\n",string3);

printf("string sem espacos %s",stringnova);



}