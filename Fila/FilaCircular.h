//FilaCircular.h

typedef enum boolean{false=0, true=1} Boolean;
typedef int TipoElemento;

/**************************************
* DADOS
**************************************/
typedef struct {
	TipoElemento* vetor;
	int tam;
	int inicio;
	int fim;
	int qtde;
}Fila;

/**************************************
* PROTÓTIPOS
**************************************/

Fila* fila_criar();//ok
void fila_destruir(Fila* f);//ok
Boolean fila_inserir(Fila* f, TipoElemento elemento);//ok
Boolean fila_remover(Fila* f, TipoElemento* saida); // estratégia do scanf //ok
Boolean fila_primeiro(Fila* f, TipoElemento* saida); // estratégia do scanf //ok
Boolean fila_vazia(Fila* f); 
Boolean fila_cheia(Fila* f);
int fila_tamanho(Fila* f); //ok
void fila_imprimir(Fila* f); //ok
Fila* fila_clone(Fila* f); //ok
void fila_inverter(Fila* f); //ok
Boolean fila_inserirTodos(Fila* f, TipoElemento* vetor, int tamVetor);//ok

/**************************************
* IMPLEMENTAÇÃO
**************************************/
// Desenvolva as funções

Fila* fila_criar(){

    Fila* fi = (Fila*) malloc(sizeof(Fila));
    fi->vetor = (TipoElemento*) calloc(10,sizeof(TipoElemento));
    fi->tam = 10;
    fi->inicio = 0;
    fi->fim = 0;
    fi->qtde = 0;

    return fi;

}
void fila_destruir(Fila* f){
    free(f->vetor);
    free(f);
}

Boolean fila_vazia(Fila* f){

    if(f == NULL) return false;

    return(f->qtde == 0) ;

}

Boolean fila_cheia(Fila* f){
    if(f == NULL) return false;

    if (f->qtde == f->tam) return true;
}


Boolean fila_inserir(Fila* f, TipoElemento elemento){
    if(f == NULL ) return false;
    //if(fila_cheia(f)) return false;

    
    f->vetor[f->fim] = elemento;
    f->fim = (f->fim+1)% f->tam;
    f->qtde++;
    
   

    return true;


}

Boolean fila_remover(Fila* f, TipoElemento* saida){// estratégia do scanf

if(f == NULL ) return false;

*saida = f->vetor[f->inicio];
f->inicio = (f->inicio+1)% f->tam;
f->qtde--;

return true;

} 

Boolean fila_primeiro(Fila* f, TipoElemento* saida) {// estratégia do scanf

if(f == NULL) return false;
*saida = f->vetor[f->inicio];
return true;


}
int fila_tamanho(Fila* f){

if(f == NULL) return false;

return f->qtde;


}
void fila_imprimir(Fila* f){

if(f == NULL) return;

int i = f->inicio;


for(i;i <=f->qtde;i++){
    printf("%d  ",f->vetor[i]);

}
printf("\n");

 }

 Fila* fila_clone(Fila* f){

    Fila* clone = (Fila*) malloc(sizeof(Fila));
    clone->vetor = (TipoElemento*) calloc(10,sizeof(TipoElemento));
    clone->tam = f->tam;
    clone->inicio = f->inicio;
    clone->fim = f->fim;
    clone->qtde = f->qtde;

    printf("clone");
    

    return clone;
        fila_imprimir(clone);


 }
void fila_inverter(Fila* f){
int i, j = 0;
if(f == NULL) return;

TipoElemento* aux = (TipoElemento*) calloc(10,sizeof(TipoElemento));

for(i = f->fim-1;i >= f->inicio;i--){
    aux[j] = f->vetor[i];
    j++;
}


}


Boolean fila_inserirTodos(Fila* f, TipoElemento* vetor, int tamVetor){

    if(f == NULL) return false;

    int i ;

    for(i = 0;i<=tamVetor-1;i++){
        fila_inserir(f,vetor[i]);
    }
    return true;

}