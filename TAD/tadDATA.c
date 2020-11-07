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

Data* data_criar1(int dia,int mes, int ano);

// 2. Imprimir uma data
void data_imprimir(Data *d);

// 3. Validar uma data

int validar(int dia, int mes, int ano);

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

Data* data_criar1(int dia,int mes, int ano){

Data* d = (Data*) malloc(8,sizeof(Data));
d->dia = dia;
d->mes = mes;
d-> ano = ano;

return d;

}