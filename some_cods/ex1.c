#include<stdio.h>

// 01. Desenvolver um algoritmo para resolver o cálculo do fatorial de um inteiro não negativo n.






int fatorial(int n){

    int i, fat = 1;

for(fat = 1; n > 1; n = n - 1){
    
    fat = fat * n;

        
    }

    return fat;


}














int main(void){

// entrada 


printf("fatorial %d ",fatorial(6));




}