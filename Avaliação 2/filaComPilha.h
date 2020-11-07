#include "pilha.h"


/**************************************
* DADOS
**************************************/

typedef struct {
	Pilha* p1;
    Pilha* p2;
	int qtdeElementos;
}Fila;

/**************************************
* PROTÓTIPOS
**************************************/
Fila* fila_criar();
void fila_destruir(Fila* f);
Boolean fila_inserir(Fila* f, TipoElemento elemento);
Boolean fila_remover(Fila* f, TipoElemento* saida); // estratégia do scanf
Boolean fila_primeiro(Fila* f, TipoElemento* saida); // estratégia do scanf
Boolean fila_vazia(Fila* f);


/**************************************
* EXERCICIO 02
**************************************/

Fila* fila_criar(){
	Fila* fi = (Fila*) malloc(sizeof(Fila));
	fi->p1 = pilha_criar(); 
	fi->p2 = pilha_criar();
	fi->qtdeElementos = 0;

	return fi;
   
}

void fila_destruir(Fila* f){

if(f == NULL) return;
   pilha_destruir(f->p1);
   pilha_destruir(f->p2);
   free(f);

}
Boolean fila_inserir(Fila* f, TipoElemento elemento){
	
if(f == NULL ) return false;
TipoElemento valor;

while(!pilha_vazia(f->p2)){
	pilha_desempilhar(f->p2,&valor);
	pilha_empilhar(f->p1,valor);

}
pilha_empilhar(f->p1,elemento);
f->qtdeElementos++;

return true;
   
}

Boolean fila_remover(Fila* f, TipoElemento* saida){ // estratégia do scanf
if(f == NULL || f->qtdeElementos == 0) return false;
TipoElemento removido;//,aux

	while(!pilha_vazia(f->p1)){
		pilha_desempilhar(f->p1,&removido);
		pilha_empilhar(f->p2,removido);
	}
	pilha_desempilhar(f->p2,&removido);
		*saida = removido;

 	f->qtdeElementos--;

	return true;
}

Boolean fila_primeiro(Fila* f, TipoElemento* saida){// estratégia do scanf
if(f == NULL|| f->qtdeElementos == 0) return false;

TipoElemento removido;
while(!pilha_vazia(f->p1)){
	 pilha_desempilhar(f->p1,&removido);
	 pilha_empilhar(f->p2,removido);
}
	pilha_desempilhar(f->p1,&removido);
	*saida = removido;
	return true;
    
}

Boolean fila_vazia(Fila* f){

if(f == NULL ) return false;
if(f->qtdeElementos == 0) return true;

}



