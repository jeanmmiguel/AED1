include <stdlib.h> //Alocação dinâmica
#include <stdio.h>
#include <time.h>

typedef enum boolean{false=0, true=1} Boolean;
typedef int TipoElemento;


/**************************************
* DADOS
**************************************/
typedef struct {
	TipoElemento* vetor;
	int tamVetor;
	int qtde;
}Pilha;
/**************************************
* PROTÓTIPOS
**************************************/
Pilha* pilha_criar();//ok
void pilha_destruir(Pilha* p);//ok
Boolean pilha_empilhar(Pilha* p, TipoElemento elemento);//ok
Boolean pilha_desempilhar(Pilha* p, TipoElemento* saida);//ok // estratégia do scanf
Boolean pilha_topo(Pilha* p, TipoElemento* saida);//ok // estratégia do scanf 
void pilha_imprimir(Pilha* p);//ok
int pilha_tamanho(Pilha* p);//ok
Pilha* pilha_clone(Pilha* p);//ok
void pilha_inverter(Pilha* p);//ok
Boolean pilha_empilharTodos(Pilha* p, TipoElemento* vetor, int tamVetor);//ok

/**************************************
* IMPLEMENTAÇÃO
**************************************/
// Desenvolva as funções

Pilha* pilha_criar(){
Pilha* p;
p = (Pilha*) calloc(1,sizeof(Pilha));
p->vetor = (TipoElemento*) calloc(5,sizeof(TipoElemento));
p->tamVetor = 5;
if (p != NULL) p->qtde = 0;


return p;

}

void pilha_destruir(Pilha* p){

	free(p);


}

Boolean pilha_empilhar(Pilha* p, TipoElemento elemento){

	if(p == NULL|| p->tamVetor == p->qtde) return false;


		p->vetor[p->qtde] = elemento;
		p->qtde++;


	return true;

}

Boolean pilha_desempilhar(Pilha* p, TipoElemento* saida) {	 // estratégia do scanf

	if(p == NULL || p->qtde == 0) return false;

		else

		*saida = p->vetor[p->qtde-1];
		//p->qtde--;



	return true;



}
Boolean pilha_topo(Pilha* p, TipoElemento* saida) {	// estratégia do scanf

	if(p == NULL || p->qtde == 0) return false;

	*saida = p->vetor[p->qtde-1];

	return true;
}

void pilha_imprimir(Pilha* p){
	if(p == NULL) return;

	int i ;

	for(i = p->qtde-1; i >=0 ;i--){
		printf("%d\n",p->vetor[i]);
		

	}



}

int pilha_tamanho(Pilha* p){

	if(p == NULL) return -1;

	else{
			 return (p->qtde);

	}
	

}

Pilha* pilha_clone(Pilha* p){

Pilha* clone;
int i;

clone = (Pilha*) malloc(sizeof(Pilha));
clone->vetor = (TipoElemento*) calloc(5,sizeof(TipoElemento));
clone->tamVetor = p->tamVetor;
clone->qtde = p->qtde;

for(i = p->qtde; i >=0;i--){
	clone->vetor[i] = p->vetor[i];
}



free(p->vetor);

return clone;


}



void pilha_inverter(Pilha* p){

int i  , j =0 ;
TipoElemento vet[5];


	for(i = 0; i<=p->qtde-1;i++){
		vet[j] = p->vetor[i];
		j++; 
		

	}
	printf("invertido\n");
	
	for(int k = 0 ;k <5;k++){
		printf("vet inverte %d\n", vet[k]);
	}








}


Boolean pilha_empilharTodos(Pilha* p, TipoElemento* vetor, int tamVetor){

	
	if( p == NULL) return false;
	int i ;

	for(i = 0;i <=tamVetor-1;i++){
		pilha_empilhar(p,vetor[i]);
	}


	return true;


}
