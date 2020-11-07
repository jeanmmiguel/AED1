#include<stdio.h>
#include<stdlib.h>
#include <string.h>
/**************************************
* DADO
**************************************/
typedef struct{
    
    char str[12];
    int date_type;
	
}Data;

/**************************************
* PROTÓTIPOS
**************************************/
// Escreva um protótipo de função para cada funcionalidade

Data* data_criar1(int dia,int mes, int ano);

// 2. Imprimir uma data
void data_imprimir(Data *d);

// 3. Validar uma data

int validar(int dia, int mes, int ano);
int data_validar(Data* d);

// 4. Alterar uma data
Data* data_alterar( int dia, int mes, int ano, Data* data);
// 5. Recuperar a data no formato Brasileiro (dd/mm/yyyy)
int  data_toStringBR(Data* d, char *v);
//Data* data_recuperar_br(Data *d);
// 6. Recuperar a data no formato americano (mm-dd-yyyy)
int data_toStringEUA(d1,dataNova);

//Data* data_recuperar_eua(Data *d);

// 7. Recuperar o dia da data
//Data* data_recuperar_dia(Data *d);
// 8. Recuperar o mês da data
//Data* data_recuperar_mes(Data *d);

// 9. Recuperar o ano da data
//Data* data_recuperar_ano(Data *d);

// 10. Recuperar o mês da data na forma escrita abreviada (jan, fev, mar, etc)


/**************************************
* IMPLEMENTAÇÃO
**************************************/
// Desenvolva as funções
Data* data_copia(Data* data);
Data* data_criar1(int dia,int mes, int ano){

    if( !validar(dia,mes,ano) ) return NULL ;
    Data* d = (Data*) malloc(sizeof(Data));
    sprintf(d->str, "%02d", dia); 
    sprintf(d->str+2, "%02d", mes);
    sprintf(d->str+4, "%04d", ano);
  

    return d;

}
Data* data_copia(Data* data){
  Data* novo = (Data*) malloc(sizeof(Data));
  strncpy(novo->str, data->str, 8);
  return novo;
}
void data_imprimir(Data *d){
    if(d == NULL) return;

    printf("dia %c", d->str[0]);
    printf("%c", d->str[1]);
    printf(" ");
    printf("mes %c", d->str[2]);
    printf("%c", d->str[3]);
    printf(" ");
    printf("ano %c", d->str[4]);
    printf("%c", d->str[5]);
    printf("%c", d->str[6]);
    printf("%c\n ", d->str[7]);
    //printf(" %c\n", d->str[8]);

    
    
}

int validar(int dia, int mes, int ano){

    if(dia < 1 || dia >31 ) return 0;
    if (mes < 1 || mes > 12 ) return 0;
    if (ano < 1800) return 0;

    return 1;

}

int data_validar(Data* d){

// dia

if(d->str[0] == '3'){
    if(d->str[1] > '1')
    return 0;
}
//mes

if(d->str[2] > '1' ){
    if(d->str[3] > '2'){
        return 0 ;
    }
}

//ano

if(d->str[4] < '1'){
    if(d->str[5] < '8' ){
        return 0 ;
    }
}

return 1 ;

}

Data* data_alterar( int dia, int mes, int ano, Data* data){

if(!validar(dia,mes,ano)) return 0;
sprintf(data->str, "%02d",dia);
sprintf(data->str+2, "%02d",mes);
sprintf(data->str+4, "%02d",ano);

return data;

}

int  data_toStringBR(Data* d, char *v){
   
    int i,j = 0  ;
  
    d->date_type = 1;
    
    for(i = 0 ; i <12;  i++ ){
        if(i == 2  || i == 5){
            //printf("/");

            v[i] = '/';
        }
        else{
            v[i] = d->str[j];
            j++;


        }
      // v[3] = '/';
           
    }
     
    return 1;


}

 int data_toStringEUA(Data *d, char* v  ){

  d->date_type = 0;  
  char strDia[4];
  strncpy(strDia, d->str, 2);
  strDia[3] = '\0';
  strDia[2] = '-';





//MES
//  [2, 9, mes, mes, ano, ano, ano, ano]

  char strMes[30];
  strncpy(strMes, d->str+2, 2);
  strMes[3] = '\0';
  strMes[2] = '-';


//ANO
  char strAno[5];
  strncpy(strAno, d->str+4, 4);
  strAno[4] = '\0';



strcat(strMes,strDia);
strcat(strMes,strAno);

strcpy(v,strMes);

return 1;
  



 }

int data_recupera_dia(Data *d){

    char vet[3];
    vet[0] = d->str[0];
    vet[1] = d->str[1];

  



    return 1;


}


