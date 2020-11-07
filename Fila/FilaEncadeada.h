//FilaEncadeada.h

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
	No *inicio;
	No *fim;
	int qtde;
}Fila;

/**************************************
* PROTÓTIPOS
**************************************/
Fila* fila_criar(); //ok
void fila_destruir(Fila* f);
Boolean fila_inserir(Fila* f, TipoElemento elemento);//ok
Boolean fila_remover(Fila* f, TipoElemento* saida); // estratégia do scanf //ok
Boolean fila_primeiro(Fila* f, TipoElemento* saida); // estratégia do scanf //ok
Boolean fila_vazia(Fila* f);//ok
int fila_tamanho(Fila* f);//ok
void fila_imprimir(Fila* f);//ok
Fila* fila_clone(Fila* f);//ok
void fila_inverter(Fila* f);
Boolean fila_inserirTodos(Fila* f, TipoElemento* vetor, int tamVetor);

/**************************************
* IMPLEMENTAÇÃO
**************************************/
// Desenvolva as funções

Fila* fila_criar(){
	Fila* fi = (Fila*) malloc(sizeof(Fila));
	fi->inicio = NULL;
	fi->fim = NULL;
	fi->qtde = 0;

	return fi;

}

Boolean fila_inserir(Fila* f, TipoElemento elemento){

	if(f == NULL) return false;


		No* no = (No*) malloc(sizeof(No));
		if(no == NULL) return false;

		no->dado = elemento;
		no->prox = NULL;
		f->qtde++;

		if(f->fim == NULL) //fila vazia
		f->inicio = no;

		else
		f->fim->prox = no;
		f->fim = no;

	return true;



}
void fila_destruir(Fila* f){
	if(f != NULL) {
		No* no;

		while(f->inicio != NULL){
			no = f->inicio;
			f->inicio = f->inicio->prox;
			free(no);
		}
		free(f);
	}


}
Boolean fila_remover(Fila* f, TipoElemento* saida){
	

	if(f == NULL) return false;
	if(f->inicio == NULL) false; //fila vazia;

	*saida = f->inicio->dado;
	No* aux = f->inicio;
	f->inicio = f->inicio->prox;
	f->qtde--;
	if(f->inicio == NULL) //fila vazia
		f->fim = NULL;
		free(aux);
	
	
	
}


Boolean fila_primeiro(Fila* f, TipoElemento* saida){
	if(f == NULL) return false;

	if(f->inicio == NULL) return false;

	*saida = f->inicio->dado;
	return true;



} 

Boolean fila_vazia(Fila* f){
	if(f == NULL) return false;

	if(f->qtde== 0) return true;


}
int fila_tamanho(Fila* f){

	if(f == NULL) return  0;
	else return f->qtde;


}
void fila_imprimir(Fila* f){

	if(f == NULL) return;

	No* aux = f->inicio;

	while(aux != NULL){
		printf("%d ",aux->dado);
		aux = aux->prox;
	}
printf("\n");

}
Fila* fila_clone(Fila* f){
	Fila* clone = (Fila*) malloc(sizeof(Fila));
	clone->inicio = f->inicio;
	clone->fim = f->fim;
	clone->qtde = f->qtde;

	return clone;



}

Boolean fila_inserirTodos(Fila* f, TipoElemento* vetor, int tamVetor){

	if(f == NULL) return false;

	int i = 0;
	No* aux ;
	while(aux != NULL){
		fila_inserir(f,vetor[i]);
		i++;
	}
	
	return true;


}


void fila_inverter(Fila* f){

No* no = (No*) malloc(sizeof(No));
TipoElemento aux[10], j =0;
if(f == NULL) return;


for(i = f->fim; i>=f->inicio;i--){
		aux[j++] = f->dado[i];

		fila_criar(f);

		for(i = 0;i<f->qtde;i++){
			fila_inserir(f,aux[i]);
		}

}




}