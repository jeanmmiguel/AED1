#include <stdio.h>

/*06. Desenvolver um algoritmo para realizar operações em uma matriz quadrada (alocada estaticamente) contendo números inteiros. As operações são:
Encontrar o maior valor na matriz
Somar todos os valores de uma determinada coluna.
Somar a diagonal principal */


int Mostramaior(int m[][2]){

int maior = m[0][0];
int i, j;

for(i = 0; i<2;i++){
    for(j = 0;j<2;j++){
        
            if(m[i][j]> maior){
            maior = m[i][j];
 }
         }

      }
return maior;
}

int SomarColuna(int m[][2], int coluna){

        int i, j, soma = 0;

        for(i = 0; i<2;i++){
                for(j = 0;j<2;j++){
        
        }
             soma+=m[i][coluna];

      }

        return soma;

}

int SomaDiagonalPrincipal(int m[][3]){

int i, j, soma = 0;

        for(i = 0; i<3;i++){
                for(j = 0;j<3;j++){
        
        if(i==j){
                
                soma+=m[i][j];
                }
        
        }
            

      }

        return soma;


}






int main(void){



int m[3][3] = {{2,0,0},{0,1,0},{0,0,1}};


int maior = Mostramaior(m);
int soma = SomarColuna(m,0);
int somaDiagonal = SomaDiagonalPrincipal(m);

printf(" o maior elemento e %d \n", maior);
printf(" a soma  da coluna e %d\n ", soma);
printf(" a soma  da diagonal principal e %d ",  somaDiagonal);


}