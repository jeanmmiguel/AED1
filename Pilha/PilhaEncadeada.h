//PilhaEncadeada.h

typedef enum boolean{false=0, true=1} Boolean;
typedef int TipoElemento;

/**************************************
* DADOS
**************************************/
typedef struct no{
	TipoElemento dado;
	struct no    *prox;
}No;

typedef struct {
	No *topo;
	int qtdeElementos;
}Pilha;

/**************************************
* PROTÓTIPOS
**************************************/
Pilha* pilha_criar();//ok
void pilha_destruir(Pilha* p);//ok
Boolean pilha_empilhar(Pilha* p, TipoElemento elemento);//ok
Boolean pilha_desempilhar(Pilha* p, TipoElemento* saida); // estratégia do scanf //ok
Boolean pilha_topo(Pilha* p, TipoElemento* saida); // estratégia do scanf //ok
void pilha_imprimir(Pilha* p);//ok
int pilha_tamanho(Pilha* p);//ok
Pilha* pilha_clone(Pilha* p);//ok
void pilha_inverter(Pilha* p);
Boolean pilha_empilharTodos(Pilha* p, TipoElemento* vetor, int tamVetor);//ok

/**************************************
* IMPLEMENTAÇÃO
**************************************/
// Desenvolva as funções

No* criaNo(TipoElemento e,No* prox){

No* newno =  (No*) malloc(sizeof(No));
newno->dado = e;
newno->prox = prox;

return newno;


}
Pilha* pilha_criar(){

	Pilha* p =(Pilha*) calloc(1,sizeof(Pilha));
	p->topo = NULL;
	p->qtdeElementos = 0;
	

	return p;

}
/*
void pilha_destruir(Pilha* p){


free(p);


}
*/

Boolean pilha_empilhar(Pilha* p, TipoElemento elemento){

	if(p == NULL) return false;


	

	No* no = criaNo(elemento,NULL);

	no->prox =p->topo; 
	p->topo =  no;
	p->qtdeElementos++;

	return true;

	}





Boolean pilha_desempilhar(Pilha* p, TipoElemento* saida){
        
	if(p == NULL) return false;

	No* removido = p->topo;
	*saida = removido->dado;
	p->topo = removido->prox;
	removido->prox = NULL;
	p->topo->prox = NULL; //perguntar para o professor
	p->qtdeElementos--;

	return true;




}


void pilha_imprimir(Pilha* p){

	if(p == NULL) return ;
	

	No* aux = p->topo;
	while(aux!= NULL){
		printf("%d\n",aux->dado);
		aux = aux->prox;
	}

	


}

Boolean pilha_topo(Pilha* p, TipoElemento* saida){

	if(p == NULL) return false;
	*saida = p->topo->dado;

	return true;



}
int pilha_tamanho(Pilha* p){
	if(p == NULL)  return 0;

	int tamanho;

	tamanho = p->qtdeElementos;

	return tamanho;

}

Pilha* pilha_clone(Pilha* p){

	Pilha* clone = (Pilha*) malloc(sizeof(Pilha));
	clone->topo = p->topo;
	clone->qtdeElementos = p->qtdeElementos;



	free(p);
	p = NULL;


	return clone;

}


void pilha_inverter(Pilha* p){


if(p->qtdeElementos == 0) return;

Pilha* aux =(Pilha*) malloc(sizeof(Pilha));
//aux->topo =  NULL;
//aux->qtdeElementos = 0;
int valor;



while(p->topo != NULL){
pilha_desempilhar(p,&valor);



}
pilha_imprimir(aux);




}



Boolean pilha_empilharTodos(Pilha* p, TipoElemento* vetor, int tamVetor){


	if(p == NULL) return false;
	int i;

	for(i = 0; i < tamVetor; i++){
		criaNo(vetor[i],NULL);
		pilha_empilhar(p,vetor[i]);
	}

	return true;

}