1) Escreva o codigo que represente a ilustração

#include<stdio.h>

void main(){

int i = 0, j =0, k =0;

int linhas = 4;
int colunas  = 2;
int m[4][2] = {{1,2}, {3,4}, {5,6}, {7,8}};

int *p =(int*) m;
int *w = (int*)&m[3][0];

}

2)Com base na ilustração, escreva um trecho de código que percorra todos os elementos da matriz e imprima o
endereço de memória e o valor armazenado. O código deve ser genérico, ou seja, deve ser capaz de percorrer
qualquer matriz. Para isso, utilize 2 variáveis para representar o número de linhas e colunas da matriz:


printf("endereco matriz: %u\n",m);

Neste trecho, utilize a variável m por meio da notação de
colchetes.


for(i = 0;i<linhas;i++){
    for(j = 0;j< colunas;j++){

        printf("%d\n", m[i][j]);

    }
}


Neste trecho, utilize a variável p e a notação de
ponteiros. Não é permitido o uso dos colchetes.

for(i = 0; i< linhas * colunas; i ++){
   
  
     printf("  %d \n",*(p+i));

    }



3)Determine os valores com base na ilustração:

m:#20
m[0]:#20
p : #20
m+1: #28
m[1] : #28
p + 3: #32
m[0][0] : 1
*m [0]: 1
*p: 1
p[0] : 1
m[3][1] : 8
*(m[3] + 1) :8
*(*(m+3)+1): 8
*(p+(3*2)+1) :8
w[1]: 8
*(w+1): 8
