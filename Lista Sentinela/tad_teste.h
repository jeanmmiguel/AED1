#include <stdio.h>

int total=0;
int pass =0;
int fail =0;

void test(int condicao,char *msg){
    total++;
    if(!condicao){
        fail++;
        printf("Erro: '%s'\n",msg);
    }else{
        pass++;
        printf("[OK]: '%s'\n",msg);
    }
}
void report(void){
    printf("--------------\n");
    printf("Total = %d, Passaram = %d, Falharam = %d\n",total,pass,fail);
}