#include<stdio.h>

//4. Desenvolver um algoritmo para exibir o menor e o maior elemento de um vetor de números inteiros. 

int Mostramaior(int *v){

int maior = v[0];
int i;

for(i = 0; i<5;i++){

        if(v[i]> maior){
            maior = v[i];
        }

      

}


  return maior;
}

int  Mostramenor(int *v){

int menor = v[0];
int i;

for(i = 0; i<5;i++){

        if(v[i]<menor){
            menor = v[i];
        }

}



return menor;
}



int main(void){

int v[5] = {2,3,1,0,5};

int maior = Mostramaior(v);
int menor = Mostramenor(v);


printf("maior e %d\n",maior);
printf("menor e %d",menor);


}