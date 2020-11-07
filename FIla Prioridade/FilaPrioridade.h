typedef enum boolean{false=0, true=1} Boolean;
typedef int TipoElemento;

/**************************************
* DADOS
**************************************/
typedef struct {
	TipoElemento* vetor;
	int tam;
	int qtde;
}FilaPrioridade;

/**************************************
* PROTÓTIPOS
**************************************/

FilaPrioridade* filaP_criar();//ok
void filaP_destruir(FilaPrioridade* f);
Boolean filaP_inserir(FilaPrioridade* f, TipoElemento elemento);
Boolean filaP_remover(FilaPrioridade* f, TipoElemento* saida); // estratégia do scanf
Boolean filaP_vazia(FilaPrioridade* f);//ok
int filaP_tamanho(FilaPrioridade* f);//ok
void filaP_imprimir(FilaPrioridade* f);//ok
FilaPrioridade* filaP_clone(FilaPrioridade* f);//ok
Boolean filaP_inserirTodos(FilaPrioridade* f, TipoElemento* vetor, int tamVetor);

/**************************************
* IMPLEMENTAÇÃO
**************************************/
// Desenvolva as funções

FilaPrioridade* filaP_criar(){

FilaPrioridade* fi  = (FilaPrioridade*) calloc(1,sizeof(FilaPrioridade));
fi->vetor = (TipoElemento*) calloc(20,sizeof(TipoElemento));
fi->tam = 10;
fi->qtde = 0;

return fi;
}
void promoverElemento(FilaPrioridade* f, int k){ //k é a posição do filho onde inseriu o elemento

int pai, aux=0;

pai = (k - 1)/2; // calcula a posição do pai do K dentro do array
	while((k >0  ) && (f->vetor[k] >  f->vetor[pai])){ //volta no array, subindo na arvore, enquanto o filho for positivo e ou houver violação na prioridade(filho ser maior que o pai)
		 aux = f->vetor[k]; // faz a troca
		 f->vetor[k] = f->vetor[pai];
		 f->vetor[pai] = aux;
		 k = pai; //valor que era do pai agora é filho
		pai = (pai -1) / 2; // calcula a posição do novo pai
		
	 	

}

}

	}
void rebaixaElemento(FilaPrioridade* f,int k){// k é a posição do pai que vai ser rebaixado

int filho = (2 * k) + 1; // calcula o filho desse pai (filho do k)
 int aux;
while(filho < f->qtde){
	if(filho < f->qtde-1) // quer dizer que ele tem um irmão
		if(f->vetor[filho] < f->vetor[filho+1]) //verificar qual dos dois filhos é o maior, se o primeiro for menor, soma mais 1 (filho++), para obter o filho com maior prioridade
			filho ++;

			if(f->vetor[k] >= f->vetor[filho]) break; // verifica se o pai tem prioridade maior ou igual a do filho, se tiver, então não faz nada, pois já esta dentro dos requisitos

			aux = f->vetor[k]; // troca pai e filho de lugar
			f->vetor[k] = f->vetor[filho];
			f->vetor[filho] = aux; 
			k = filho;

			filho = (2 * k )+ 1; // calcular o novo filho desse novo pai
	}
}
Boolean filaP_inserir(FilaPrioridade* f, TipoElemento elemento){
	if(f == NULL) return false;

	f->vetor[f->qtde] = elemento; // insere na posição vaga do array
	f->qtde++;
	promoverElemento(f,f->qtde-1); // função que vai analisar a partir da posição qtde, onde o elemento tem que ficar


	return true;

}

Boolean filaP_remover(FilaPrioridade* f, TipoElemento* saida){
if(f == NULL) return false;

f->qtde--;
*saida = f->vetor[0];
f->vetor[0] = f->vetor[f->qtde];//copiar o elemento do final do array, no começo, ou seja o que tem menos prioridade agora tem mais prioridade
rebaixaElemento(f,0); // pegar o elemento que foi colocado no topo e colocar em sua posição correta, passa a fila e a posição que quer



}


void filaP_imprimir(FilaPrioridade* f){
	if(f == NULL) return;

	int i;

	for(i = 0;i<f->qtde;i++){
		printf("%d ",f->vetor[i]);
	}
	printf(" \n");
}



int filaP_tamanho(FilaPrioridade* f){
	if(f == NULL) return 0;

	return f->qtde;
}


Boolean filaP_vazia(FilaPrioridade* f){

	if(f == NULL) return false;

	return (f->qtde == 0);
}
FilaPrioridade* filaP_clone(FilaPrioridade* f){


	FilaPrioridade* clone  = (FilaPrioridade*) calloc(1,sizeof(FilaPrioridade));
	clone->vetor = (TipoElemento*) calloc(f->tam,sizeof(TipoElemento));

	for (i = 0;i<f->tam;i++){
		clone->vetor[i] = f->vetor[i];

	}
	clone->tam = f->tam;
	clone->qtde = f->qtde;

	return clone;
}

Boolean filaP_inserirTodos(FilaPrioridade* f, TipoElemento* vetor, int tamVetor){
	if(f == NULL) return false;

	int i = 0 ;

	for(i = 0;i<=tamVetor-1;i++){
		filaP_inserir(f,vetor[i]);
	}
	return true;
}
void filaP_destruir(FilaPrioridade* f){

	free(f->vetor);
	f = NULL;
}