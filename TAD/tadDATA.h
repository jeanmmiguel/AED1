#include<stdio.h>
#include<stdlib.h>
#include <string.h>
/**************************************
* DADO
**************************************/
typedef struct{
    
    int dia;
    int mes;
    int ano;
	
}Data;

/**************************************
* PROTÓTIPOS
**************************************/
// Escreva um protótipo de função para cada funcionalidade

Data* data_criar(int dia,int mes, int ano);

// 2. Imprimir uma data
void data_imprimir(Data *d);

// 3. Validar uma data

int data_validar(Data* d);

// 4. Alterar uma data
Data* data_alterar( int dia, int mes, int ano, Data* data);
// 5. Recuperar a data no formato Brasileiro (dd/mm/yyyy)
//int  data_toStringBR(Data* d, char *v);
//Data* data_recuperar_br(Data *d);
// 6. Recuperar a data no formato americano (mm-dd-yyyy)
//int data_toStringEUA(d1,dataNova);

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

Data* data_criar(int dia,int mes, int ano){

Data* d = (Data*) malloc(sizeof(Data));
d->dia = dia;
d->mes = mes;
d-> ano = ano;

return d;

}

void data_imprimir(Data* d){

  
            printf("%d %d %d \n", d->dia, d->mes,d->ano);

    
  }

int data_validar(Data*d){


    if(d->dia < 1|| d->dia > 31) return 0;
    if(d->mes <1 || d->mes > 12) return 0;
    if(d->ano < 1800) return 0;


    return 0;


}

int validar(int dia, int mes, int ano){

    if(dia < 1 || dia >31 ) return 0;
    if (mes < 1 || mes > 12 ) return 0;
    if (ano < 1800) return 0;

    return 1;

}

Data* data_alterar(int dia, int mes, int ano, Data *d){

        if( !validar(dia,mes,ano) ) return NULL ;

        d->dia = dia;
        d->mes = mes;
        d->ano = ano;
       // printf("data nova é %d %d %d", d->dia, d->mes, d->ano);

        return d;

}

void data_toStringBR(Data* d){

             
  printf("%d/ %d/ %d \n", d->dia, d->mes,d->ano);

}
void data_toStringUSA(Data* d){

             
  printf("%d- %d- %d \n", d->mes, d->dia,d->ano);
  

}


char* data_recuperaMesFormato(Data *d, char *v){

    if(d->mes == 1){
        strcpy(v  ,"jan");
        printf("mes %s\n",v);
    }
    
    if(d->mes == 2){
        strcpy(v  ,"fev");
        printf("mes %s\n",v);


    }
    if(d->mes == 3){
        strcpy(v  ,"mar");
        printf("mes %s\n",v);

    }
    if(d->mes == 4){
          strcpy(v  ,"abr");
         printf("mes %s\n",v);


    }
    if(d->mes == 5){
                strcpy(v  ,"mai");
                printf("mes %s\n",v);


    }
    if(d->mes == 6){
                strcpy(v  ,"jun");
                printf("mes %s\n",v);


    }
    if(d->mes == 7){
                strcpy(v  ,"jul");
                 printf("mes %s\n",v);


    }
    if(d->mes == 8){
                strcpy(v  ,"ago");
              printf("mes %s\n",v);


    }
    if(d->mes == 9){
                strcpy(v  ,"set");
                 printf("mes %s\n",v);


    }
    if(d->mes == 10){
                strcpy(v  ,"out");
                printf("mes %s\n",v);


    }
    if(d->mes == 11){
                strcpy(v  ,"nov");
                printf("mes %s\n",v);


    }
    if(d->mes == 12){
                strcpy(v  ,"dez");
                 printf("mes %s\n",v);


    }
    
return v;

}

int* data_recuperar_dia(Data *d, int* dia){


    *dia = d->dia;
    printf("o dia é %d\n",*(dia));
    return dia;



}

int* data_recuperar_mes(Data *d, int* mes){


    *mes = d->mes;
    printf("o mes é %d\n",*(mes));
    return mes;



}

int* data_recuperar_ano(Data *d, int* ano){


    *ano = d->ano;
    printf("o ano é %d\n",*(ano));
    return ano;



}
