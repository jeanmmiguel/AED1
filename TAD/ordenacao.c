#include <stdio.h>
#include <stdlib.h>


int main(){

//bubble sort
int v[7]={1,5,9,302,7,705,4};
int i, j ,k, aux;

for(i=0;i<7;i++){
    for(j=0;j<6;j++){
        if(v[j] > v[j+1]){
            aux = v[j];
            v[j] = v[j+1];
            v[j+1] = aux;


        }
    }
}


for(k=0;k<7;k++){
   printf(" %d",v[k]);
}




}




// selection sort 
/*
int v[7]={1,5,9,302,7,705,-8};
int i, j ,k, aux;



for(i=0;i<7;i++){
    for(j=i+1;j<7;j++){
        if(v[i] > v[j]){
            aux = v[i];
            v[i] = v[j];
            v[j] = aux;

        }
    }
}

for(k=0;k<7;k++){
    printf(" %d",v[k]);
}


*/


while((c[i] = getc(fp) ) != EOF){
    if(c[i] == 10){
      for(int k = 0; i > 0; k++){
        num += (int)(c[k] - '0')*10^(i-1);
        //printf("um = %d , i = %d",num, (c[k] - '0'));
        i--;
      }
      num -= 1;
      printf("%d",num);
      num = 0;
      i = 0;
    }
    else
      i++;
   }   
   
   
   
   
      /* Enquanto não chegar ao final do arquivo */
   fclose(fp);
   return 0;
  
  vet_imprimir(vet3);



////


if((fp = fopen("entrada.txt","r")) == NULL){
  printf( "Erro na abertura do arquivo");
  exit(1);
}

for (i=0; i < strlen(entrada); i++)
{
   fputc(entrada[i],fp);
}
fclose(fp);