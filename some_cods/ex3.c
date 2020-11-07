#include <stdio.h>

// 03. Desenvolver um algoritmos que aceite como entrada uma string e a retorne com esta modificação: cada vogal é substituída por quatro cópias consecutivas de si mesmo e um ponto de exclamação (!) é acrescentado no final.




int Vogal(char c){
  char* vogais= "aeiouAEIOU";
  int i;
  for(i=0; vogais[i] != '\0'; i++){
    if(vogais[i] == c) return 1;
  } 
  return 0;
}


void modificaString(char* original, char* copia){
  int i,j=0;
  
  for(i=0; original[i]!='\0'; i++){

    if(!Vogal(original[i])){      
      copia[j++] = original[i];
    }else{      
      copia[j++] = original[i];
      copia[j++] = original[i];
      copia[j++] = original[i];
      copia[j++] = original[i];
    }        
  }
  copia[j++] = '!';
  copia[j] = '\0';
}

int main(void) {
//entrada
char str[50] = "xbc"; //xbc!
char strCopia[100];


//processamento
modificaString(str, strCopia);

//saida
printf("%s\n",str);
printf("%s\n",strCopia);


}