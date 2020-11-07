#include <stdlib.h> //Alocação dinâmica
#include <stdio.h>
#include <time.h>
/**************************************
* DADOS
**************************************/

typedef struct{
	int codigo;
	char descricao[120];
	float preco;
}Produto;
// TipoElemento e int são sinônimos a partir desta definição. Quando for necessário manipular outro tipo de dado, basta alterar essa definição.
typedef Produto TipoElemento;



typedef struct{
    Produto* array;
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

int vet_buscaBinaria(Vetor* v, TipoElemento* elemento);

Vetor* vet_importar(char* nomeArquivo);

Boolean vet_exportar(Vetor* v, char* nomeArquivo);

Boolean vet_toString(Vetor* v, TipoElemento* enderecoString);

int vet_imprimir(Vetor* v);

void vet_destruir(Vetor* v);

//void imprimir_atributos(Vetor* v);


Vetor* vet_criar(){
  Vetor* v;
  v = (Vetor*) malloc(sizeof(Vetor));

  v->array = (Produto*)calloc(5, sizeof(Produto));
 
   return v;

}

Boolean vet_inserirFim(Vetor* v, TipoElemento elemento){
 
  //verifica_aumenta(v);

  if(v == NULL) return false;

  v->array[v->qtdeElementos++] = elemento;
  return true;
}



int vet_imprimir(Vetor* v){
  if(v == NULL) return 0;

  int i;
  printf("Código            Descrição           Preço\n\n");
  printf("{");
  for(i=0; i < v->qtdeElementos; i++){
    printf("%d ", v->array[i].codigo);
    printf("%s  ", v->array[i].descricao);
    printf("%.2f \n", v->array[i].preco);
  if(i < v->qtdeElementos-1) printf(" ");
  }
  printf("}");
  printf("\n");

  return 0;

}


Boolean vet_inserir(Vetor* v, TipoElemento elemento, int posicao){
    
    //verifica_aumenta(v);

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
     for(j=posicao+(v->qtdeElementos)+1 ; j <= v->qtdeElementos;j++){
         
      v->array[j]= v->array[j+1];
      endereco->codigo= v->array[posicao+(v->qtdeElementos)].codigo;
      strcpy(endereco->descricao , v->array[posicao+(v->qtdeElementos)].descricao);
     endereco->preco= v->array[posicao+(v->qtdeElementos)].preco;

    }
             v->qtdeElementos--;

      }else{

      endereco->codigo= v->array[posicao].codigo;
      strcpy(endereco->descricao , v->array[posicao].descricao);
     endereco->preco= v->array[posicao].preco;


    for(i=posicao; i <= v->qtdeElementos;i++){
    v->array[i]= v->array[i+1];


    }
      v->qtdeElementos--;

 }

  //verifica_diminui(v);
  return true;

 
      


}




int vet_removerElemento(Vetor* v, TipoElemento elemento){

  int i ,j;
    for(i = 0;i <v->qtdeElementos-1;i++){
       if(v->array[i].codigo == elemento.codigo){
            for(j = 0; j <= v->qtdeElementos;j++){
              v->array[i] = v->array[i+1]; return i;
              
            }
       

         }    
     
          v->qtdeElementos--;


 }


       return -1;

  //verifica_diminui(v);

}


int vet_tamanho(Vetor* v){

int cont = 0 ;
cont = v->qtdeElementos;
 

return cont;

}


/*

Boolean vet_elemento(Vetor* v, int posicao, TipoElemento* saida){

  int aux;

  int i = 0,j;
  if(posicao > v->qtdeElementos) return false;
  if(posicao < 0 ){

      for(j=0; j < v->qtdeElementos;j++){
            //saida = posicao+(v->qtdeElementos)+1;
            aux = posicao+(v->qtdeElementos);
            *saida = v->array[aux];



  }
        printf("a posicao informada foi %d\n",aux);

  }else{
     for(i = 0;i<v->qtdeElementos;i++){
    //*saida = v->array[posicao];
    *saida = v->array[posicao];
  }
      printf("a posicao informada foi %d\n",posicao);


  
  }
  return true;



}



int vet_posicao(Vetor* v, TipoElemento elemento){
  
   int i = 0;

  for(i = 0;i<v->qtdeElementos;i++){
    if(v->array[i].codigo == elemento.codigo) return i;


  }
  return -1;


}



void vet_destruir(Vetor *v){

  free(v->array);
  v = NULL;

  }

*/
Boolean vet_toString(Vetor* v, TipoElemento* enderecostruct){

   if(v == NULL) return false;

  char elemento[600];

  int i;
  for(i=0; i<v->qtdeElementos; i++){
    sprintf(elemento,"(%d) (%s) [%.2f]\n", v->array[i].codigo, v->array[i].descricao, v->array[i].preco);
    strcat(enderecostruct, elemento);
   
  }
 


  return true;
}










/*


  void verifica_aumenta(Vetor* v){


  if(v->qtdeElementos >= v->tamVetor){

    int i = 0;
    Vetor* temp;
    temp = (Vetor*) calloc(2*v->qtdeElementos,sizeof(Vetor));
    temp->array = (Produto*)calloc(2*v->qtdeElementos,sizeof(Produto));


    temp->array[0].codigo = 0;
    strcpy(temp->array[1].descricao, " ");
    temp->array[2].preco = 0;
    
    for(i=0;i<v->qtdeElementos;i++){
      
      temp->array[i].codigo= v->array[i].codigo;
     strcpy(temp->array[i].descricao , v->array[i].descricao);
      temp->array[i].preco= v->array[i].preco;

    }

    free(v->array);
    v->array = temp->array;
    v->tamVetor = 2*v->qtdeElementos;
    
     }
    
       
    }

*/


void verifica_diminui(Vetor* v){


  if((v->qtdeElementos/ v->tamVetor) * 100 <= 25){

    int i = 0;
    Vetor* tmp;
    tmp = (Vetor*) calloc(v->qtdeElementos/2,sizeof(Vetor));
    tmp->array = (Produto*) calloc(v->qtdeElementos/2,sizeof(Produto));
    tmp->array[0].codigo = 0;
    strcpy(tmp->array[1].descricao, " ");
    tmp->array[2].preco = 0;
    
    for(i=0;i<v->qtdeElementos;i++){
       tmp->array[i].codigo = v->array[i].codigo;
      strcpy(tmp->array[i].descricao , v->array[i].descricao);
      tmp->array[i].preco= v->array[i].preco;


    }


    free(v->array);
    v->array = tmp->array;
    v->tamVetor = (v->qtdeElementos)/2;
    
     }
}



Vetor* vet_clone(Vetor* v){

Vetor* clone;
  int i;
  clone = (Vetor*) malloc(sizeof(Vetor));
  clone->array = (TipoElemento*) calloc(10, sizeof(TipoElemento));

  for(i=0;i<=v->qtdeElementos;i++){
     clone->array[i].codigo = v->array[i].codigo;
      strcpy(clone->array[i].descricao , v->array[i].descricao);
      clone->array[i].preco= v->array[i].preco;
  }

  clone->tamVetor = v->tamVetor;
  clone->qtdeElementos = v->qtdeElementos;

  
  free(clone->array);

  return clone;

}


/*
void imprimir_atributos(Vetor* v){

  for(int i = 0;i<v->qtdeElementos;i++){
      printf("%d\n",v->array[i]);


  }
  printf("quantidade %d\n", v->qtdeElementos);
  printf("tamanho %d\n", v->tamVetor);


}

      */

void vet_ordenarBuble(Vetor* v){

  int i,  cont;
  Produto temp;


for(cont = 1;cont < v->qtdeElementos;cont++){
  for(i = 0 ; i < v->qtdeElementos-1;i++){
    if(v->array[i].codigo > v->array[i+1].codigo ){
      temp = v->array[i];
    v->array[i]= v->array[i+1];
    v->array[i+1] = temp;

        }
    
    }
  

  }
  vet_imprimir(v);

 }
  
  

int vet_buscaBinaria(Vetor* v, TipoElemento* elemento){

int inicio = 0;
int fim = v->qtdeElementos;
int meio ;

while(inicio <= fim ){
  meio = (fim+inicio)/2;
  if (v->array[meio].codigo > elemento->codigo){
   fim =  meio - 1;
   
      }
  else if (v->array[meio].codigo < elemento->codigo){

        inicio = meio + 1 ;
      
    }else

      return meio;
  }
  
  return -1;


}





void vet_ordenarSelection(Vetor* v){

int i, j ,k;
Produto aux;



for(i=0;i<v->qtdeElementos;i++){
    for(j=i+1;j<v->qtdeElementos;j++){
        if(v->array[i].codigo > v->array[j].codigo){
            aux = v->array[i];
            v->array[i] = v->array[j];
            v->array[j] = aux;

        }
    }
}
vet_imprimir(v);

 }

 

void vet_ordenarInsertion(Vetor* v){

int i , j ;
Produto aux;

for(i = 1;i< v->qtdeElementos;i++){
  aux = v->array[i].codigo;
  for(j = i; (j >0) && (aux < v->array[j-1].codigo);j--)
  v->array[j] = v->array[j-1];
  v->array[j] = aux;
}

vet_imprimir(v);

}


/*

Vetor* vet_importar(char* entrada){

char nomeArquivo[50] = "inside.txt";
  
  FILE *arq = fopen(nomeArquivo, "r");
  char linha[300];
  
  char delimitador[2] = "|";
  char* codigoStr;
  char* descricaoStr;
  char* precoStr;

  int cont = 0;

// enquanto nao for o final do arquivo
  while(!feof(arq)){
    for(int i = 0;i <10;i++){
          printf("%d ", arq);

    }
    // printf("%s", linha);

    //extracao das informacoes
    codigoStr = strtok(linha, delimitador);
    descricaoStr = strtok(NULL, delimitador);
    precoStr = strtok(NULL, delimitador);
    
    // criando o produto
    Produto p;
    p.codigo = atoi(codigoStr);
    strcpy(p.descricao, descricaoStr);
    eliminaEspacosBranco(p.descricao);
    p.preco = atof(precoStr);


    // inserir no Vetor
    vet_imprimir(&p);
    printf("\n\n");
   

    cont++;
    if(cont == 10) break;

  }

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
    result = fwrite (v->array[i], sizeof(int), 10, arq);
    

    fclose(arq);

    return true;

}
*/