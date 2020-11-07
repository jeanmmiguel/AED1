#include <stdlib.h> //Alocação dinâmica
#include <stdio.h>
#include <time.h>
/**************************************
* DADOS
**************************************/

typedef int TipoElemento;
// TipoElemento e int são sinônimos a partir desta definição. Quando for necessário manipular outro tipo de dado, basta alterar essa definição.

typedef struct{
    TipoElemento* array;
    int tamVetor;
    int qtdeElementos;
}Vetor;

typedef enum boolean{false=0, true=1} Boolean;

/**************************************
* PROTÓTIPOS
**************************************/
Vetor* vet_criar();

Boolean vet_inserirFim(Vetor* v, TipoElemento elemento);

Boolean vet_inserir(Vetor* v, TipoElemento elemento, int posicao);

Boolean vet_substituir(Vetor* v, int posicao, TipoElemento novoElemento);

Boolean vet_removerPosicao(Vetor* v, int posicao, TipoElemento* endereco);

int vet_removerElemento(Vetor* v, TipoElemento elemento);

int vet_tamanho(Vetor* v);

Boolean vet_elemento(Vetor* v, int posicao, TipoElemento* saida);

int vet_posicao(Vetor* v, TipoElemento elemento);

void verifica_aumenta(Vetor* v);

void verifica_diminui(Vetor* v);

Vetor* vet_clone(Vetor* v);

void vet_ordenarBuble(Vetor* v);

void vet_ordenarSelection(Vetor* v);

void vet_ordenarInsertion(Vetor* v);

int vet_buscaBinaria(Vetor* v, TipoElemento elemento);

Vetor* vet_importar(char* nomeArquivo);

Boolean vet_exportar(Vetor* v, char* nomeArquivo);

Vetor* vet_criarAleatorio(int tam);

Vetor* vet_criarAscendente(int tam);

Vetor* vet_criarDescendente(int tam);

Vetor* vet_criarAscendenteParcial(int tam, float percentual);

Boolean vet_toString(Vetor* v, char* enderecoString);

int vet_imprimir(Vetor* v);

void vet_destruir(Vetor* v);

//void imprimir_atributos(Vetor* v);


Vetor* vet_criar(){
  Vetor* novo;
  novo = (Vetor*)malloc(sizeof(Vetor));

  novo->array = (TipoElemento*)calloc(20, sizeof(TipoElemento));
  novo->tamVetor = 5;
  novo->qtdeElementos = 0;

  return novo;

}
Boolean vet_inserirFim(Vetor* v, TipoElemento elemento){
  verifica_aumenta(v);

  if(v == NULL) return false;

  v->array[v->qtdeElementos++] = elemento;
  return true;
}
Boolean vet_inserir(Vetor* v, TipoElemento elemento, int posicao){
    
    verifica_aumenta(v);

    if(posicao > v-> qtdeElementos) return false;

    int i = 0, j ;
    int aux;

    if(posicao >= v->qtdeElementos) return false;
   
    if(posicao < 0 ){

      for(j=0; j < v->qtdeElementos;j++){
        int aux = posicao+v->qtdeElementos;
        v->array[aux] = elemento;
      
      }
     }else{
      for(i=0; i < v->qtdeElementos; i++){
      v->array[posicao]= elemento;

    }
    

      }
    
    return true;
 

}

Boolean vet_substituir(Vetor* v, int posicao, TipoElemento novoElemento){

    if(posicao >= v-> qtdeElementos) return false;
   
   int i = 0, j ;
   int aux;
   
    if(posicao < 0 ){

      for(j=v->qtdeElementos; j > posicao;j--){
        aux = posicao+v->qtdeElementos;
        v->array[aux] = v->array[j-1];
       
     
   }
    v->array[aux] = novoElemento;
   
   }else{
     for(i=v->qtdeElementos; i > posicao;i--){
    v->array[i]= v->array[i-1];

    }

    v->array[posicao] = novoElemento;
    v->qtdeElementos++;
    }
    
      
    return true;
}

Boolean vet_removerPosicao(Vetor* v, int posicao, TipoElemento* endereco){

    if(posicao >= v->qtdeElementos) return false;


    int i = 0, j ;
    int aux;
    if(posicao < 0 ){
     for(j=posicao+(v->qtdeElementos) ; j <= v->qtdeElementos;j++){
          v->array[j]= v->array[j+1];
              *endereco = posicao+(v->qtdeElementos)+1;
      }
           v->qtdeElementos--;

      } else{

    *endereco = v->array[posicao];

    for(i=posicao; i <= v->qtdeElementos;i++){
    v->array[i]= v->array[i+1];


    }
      v->qtdeElementos--;

 }

  verifica_diminui(v);
  return true;

 
      
}

int vet_removerElemento(Vetor* v, TipoElemento elemento){

  int i ;
    for(i= 0; i <v->qtdeElementos;i++){
         if(v->array[i] == elemento){
         v->array[i]= v->array[i+1]; return i;
                
        }

    }
      v->qtdeElementos--;


  verifica_diminui(v);

}


int vet_tamanho(Vetor* v){

int cont = 0 ;
cont = v->qtdeElementos;
 

return cont;

}


Boolean vet_elemento(Vetor* v, int posicao, TipoElemento* saida){


  int i = 0,j, aux;
  if(posicao > v->qtdeElementos) return false;
  if(posicao < 0 ){

      for(j=0; j < v->qtdeElementos;j++){
            *saida = posicao+(v->qtdeElementos)+1;
            aux = posicao+(v->qtdeElementos);
            aux = *saida;

  }
        printf("a posicao informada foi %d\n",aux);

  }else{
     for(i = 0;i<v->qtdeElementos;i++){
    *saida = v->array[posicao];
  }
      printf("a posicao informada foi %d\n",posicao);


  
  }
  return true;



}

int vet_posicao(Vetor* v, TipoElemento elemento){
  
   int i = 0;

  for(i = 0;i<v->qtdeElementos;i++){
    if(v->array[i] == elemento) return i;


  }
  return -1;


}

int vet_imprimir(Vetor* v){
  if(v == NULL) return 0;

  int i;
  printf("[");
  for(i=0; i < v->qtdeElementos; i++){
    printf("%d", v->array[i]);
    if(i < v->qtdeElementos-1) printf(", ");
  }
  printf("]");
  printf("\n");

  return 0;

}

void vet_destruir(Vetor *v){

  free(v->array);
  free(v);

  v = NULL;

  }

  void verifica_aumenta(Vetor* v){


  if(v->qtdeElementos >= v->tamVetor){

    int i = 0;
    int* tmp;
    tmp = (int*) calloc(2*v->qtdeElementos,sizeof(int));
    
    for(i=0;i<v->qtdeElementos;i++){
      tmp[i] = v->array[i];

    }

    free(v->array);
    v->array = tmp;
    v->tamVetor = 2*v->qtdeElementos;
    
     }
    
       
    }
Boolean vet_toString(Vetor* v, char* enderecoString){

   if(v == NULL) return false;


  *enderecoString = v->array;

  int i;
  printf("[");
  for(i=0; i < v->qtdeElementos; i++){
    printf("%d", v->array[i]);
    if(i < v->qtdeElementos-1) printf(", ");
  }
  printf("]");
  printf("\n");

  return true;

}


void verifica_diminui(Vetor* v){


  if(v->qtdeElementos/ v->tamVetor * 100 <= 25){

    int i = 0;
    int* tmp;
    tmp = (int*) calloc(v->qtdeElementos/2,sizeof(int));
    
    for(i=0;i<v->qtdeElementos;i++){
      tmp[i] = v->array[i];

    }

    free(v->array);
    v->array = tmp;
    v->tamVetor = v->qtdeElementos/2;
    
     }
    
}


Vetor* vet_clone(Vetor* v){
  Vetor* clone;
  int i;
  clone = (Vetor*) malloc(sizeof(Vetor));

  clone->array = (TipoElemento*) calloc(5, sizeof(TipoElemento));

  for(i=0;i<v->qtdeElementos;i++){
    clone->array[i] = v->array[i];
  }

  clone->tamVetor = v->tamVetor;
  clone->qtdeElementos = v->qtdeElementos;

  
  free(clone->array);

  return clone;

}

void imprimir_atributos(Vetor* v){

  for(int i = 0;i<v->qtdeElementos;i++){
      printf("%d\n",v->array[i]);


  }
  printf("quantidade %d\n", v->qtdeElementos);
  printf("tamanho %d\n", v->tamVetor);


}

      

void vet_ordenarBuble(Vetor* v){

  int i, temp, cont;


for(cont = 1;cont < v->qtdeElementos;cont++){
  for(i = 0 ; i < v->qtdeElementos-1;i++){
    if(v->array[i] > v->array[i+1] ){
      temp = v->array[i];
    v->array[i] = v->array[i+1];
    v->array[i+1] = temp;

        }
    
    }
  

  }
  vet_imprimir(v);

 }
  Vetor* vet_criarAleatorio(int tam){


  Vetor* vet;
  vet = (Vetor*)malloc(sizeof(Vetor));

  vet->array = (TipoElemento*)calloc(tam, sizeof(TipoElemento));
  vet->tamVetor = tam;
  vet->qtdeElementos = tam;

  int i;
  srand (time(NULL));
  for(i=0;i<=vet->qtdeElementos;i++){
    vet->array[i] = rand() % 100;
  }

  vet_imprimir(vet);
 
 return vet;


 }

 Vetor* vet_criarAscendente(int tam){

  int  i,j,temp;
 Vetor* vet1;
  vet1 = (Vetor*)malloc(sizeof(Vetor));

  vet1->array = (TipoElemento*)calloc(tam * 4, sizeof(TipoElemento));
  vet1->tamVetor = tam;
  vet1->qtdeElementos = tam;


  srand (time(NULL));
  for(i=0;i<=vet1->qtdeElementos;i++){
    vet1->array[i] = rand() % 100;
  

}

  for(i = 0; i < vet1->qtdeElementos; i++) {
        for(j = 0; j < vet1->qtdeElementos-1; j++){
            if( vet1->array[j] > vet1->array[j+1]){
                 temp = vet1->array[j];
                vet1->array[j] = vet1->array[j+1];
                vet1->array[j+1] = temp;
            } 
        }
    }

vet_imprimir(vet1);

  return vet1;


 }


 Vetor* vet_criarDescendente(int tam){
   
 int  i,j,temp;
 Vetor* vet2;
  vet2 = (Vetor*)malloc(sizeof(Vetor));

  vet2->array = (TipoElemento*)calloc(tam * 4, sizeof(TipoElemento));
  vet2->tamVetor = tam;
  vet2->qtdeElementos = tam;


  srand (time(NULL));
  for(i=0;i<=vet2->qtdeElementos;i++){
    vet2->array[i] = rand() % 100;
  

}

  for(i = 0; i <vet2->qtdeElementos; i++){
        for(j = 0; j < vet2->qtdeElementos-i-1; j++) {
            if( vet2->array[j] < vet2->array[j+1]){
                 temp = vet2->array[j];
                vet2->array[j] = vet2->array[j+1];
                vet2->array[j+1] = temp;
            } 
        }
    }
   vet_imprimir(vet2);

  return vet2;
 }

int vet_buscaBinaria(Vetor* v, TipoElemento elemento){

vet_ordenarBuble(v);


int inicio = 0;
int fim = v->tamVetor;
int meio ;

while(inicio <= fim ){
  meio = (fim+inicio)/2;

  if (v->array[meio] > elemento){
   fim =  meio - 1;
      }
  else if (v->array[meio] < elemento){

        inicio = meio + 1 ;
      

    }else

      return meio;
  }
  return -1;


}

Vetor* vet_criarAscendenteParcial(int tam, float percentual){


 int total = (percentual/100) * (tam);

int aux ;
int temp;
int i, j,k;


  Vetor* vet3;
  vet3 = (Vetor*)malloc(sizeof(Vetor));

  vet3->array = (TipoElemento*)calloc(tam * 4, sizeof(TipoElemento));
  vet3->tamVetor = tam;
  vet3->qtdeElementos = tam;

srand(time(NULL));

   for(i=0;i<=vet3->qtdeElementos;i++){
    vet3->array[i] = rand() % 100;

   }

  for(i = 0; i < total; i++)
    {
        for(j = 0; j < total-i-1; j++)
        {
            if( vet3->array[j] > vet3->array[j+1])
            {
                
                temp = vet3->array[j];
                vet3->array[j] = vet3->array[j+1];
                vet3->array[j+1] = temp;
            } 
        }
    }
vet_imprimir(vet3);
return vet3;

}

void vet_ordenarSelection(Vetor* v){

int i, j ,k, aux;



for(i=0;i<v->qtdeElementos;i++){
    for(j=i+1;j<v->qtdeElementos;j++){
        if(v->array[i] > v->array[j]){
            aux = v->array[i];
            v->array[i] = v->array[j];
            v->array[j] = aux;

        }
    }
}
vet_imprimir(v);

 }

void vet_ordenarInsertion(Vetor* v){

int i , j = 0, aux;

for(i = 1;i< v->qtdeElementos;i++){
  aux = v->array[i];
  for(j = i; (j >0) && (aux < v->array[j-1]);j--)
  v->array[j] = v->array[j-1];
  v->array[j] = aux;
}

vet_imprimir(v);

}


Vetor* vet_importar(char* entrada){

  Vetor* vet3;
  vet3 = (Vetor*)malloc(sizeof(Vetor));
  
  vet3->array = (TipoElemento*)calloc(4* 4, sizeof(TipoElemento));
  vet3->tamVetor = 4;
  vet3->qtdeElementos = 4;
  int len_vet = (vet3->qtdeElementos);



    cchar url[] = "entrada.txt";
    int ch1, ch2, ch3;
    FILE *arq;
    arq = fopen(url, "r");
    if (arq == NULL)
        printf("Erro, nao foi possivel abrir o arquivo\n");
    else
        while ((fscanf(arq, "%d %d %d\n", &ch1, &ch2, &ch3)) != EOF)
            printf("%d %d %d\n", ch1, ch2, ch3);
    fclose(arq);

    return (EXIT_SUCCESS);




  }



Boolean vet_exportar(Vetor* v, char* nomeArquivo){


 
    FILE *arq;
    int result;
    int i;

    arq = fopen("saida.txt", "w"); 

    if (arq == NULL) 
    {
        printf("Problemas na CRIACAO do arquivo\n");
   	return;
    }
    // Grava 30 números do vetor a partir da posição 50
    result = fwrite (v->array[0], sizeof(int), 30, arq);

    printf("Nro de elementos gravados: %d", result);
    fclose(arq);











 }
 


