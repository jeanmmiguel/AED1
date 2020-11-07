#include <stdio.h>

typedef struct aluno{
  unsigned int ra;
  char nome[20];
  float notas[4]; 
}Aluno;


//Imprime um aluno
void imprimeAluno(Aluno* a){
  printf("\n");
  printf("[RA]....:%d\n", (*a).ra);
  printf("[Nome]..:%s\n", a->nome);
  printf("[Nota 1]:%f\n", a->notas[0]);
  printf("[Nota 2]:%f\n", a->notas[1]);
  printf("[Nota 3]:%f\n", a->notas[2]);
  printf("[Nota 4]:%f\n", a->notas[3]);  
}

//Imprime o vetor de alunos
void imprimeVetorAlunos(Aluno* vetor, int qtde){  
  int i;
  for(i=0; i<qtde; i++){
    imprimeAluno(&vetor[i]);
  }
}


int main(void) {
  Aluno v[5];
  int i = 0;

  //ENTRADA
  // Lê o conteúdo do arquivo e armazena no vetor
  FILE *file_in = fopen("in.txt","r");
  while(!feof(file_in)){
    printf("Lendo linha: %d\n", i);

    fscanf(file_in,"%d %s %f %f %f %f",
      &v[i].ra,
      v[i].nome,
      &v[i].notas[0],
      &v[i].notas[1],
      &v[i].notas[2],
      &v[i].notas[3]
    );  
    i++;  
    
  }
  fclose(file_in);

  imprimeVetorAlunos(v, 5);
  

  //Chamar as funções e imprimir o resultado para conferência

}