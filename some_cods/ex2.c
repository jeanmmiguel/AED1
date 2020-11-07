#include <stdio.h>

// 02. Desenvolver um algoritmo que aceite um inteiro não negativo n como entrada e retorne o n-ésimo número de Fibonacci.






int fibonacci(int n ){

    if(n>0){

         int a = 0, b = 1, auxiliar, i;

         for(i = 2;i <=n; i++)   {

        auxiliar = a + b;
        a = b;
        b = n +i;

       
     return b;
         }
   
    }
   
    

    

}









int main(void){


printf(" fibonacci %d \n", fibonacci(7));



}