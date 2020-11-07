#include<stdio.h>

void main(){

int i = 0, j =0, k =0;

int linhas = 4;
int colunas  = 2;
int m[4][2] = {{1,2}, {3,4}, {5,6}, {7,8}};

int *p = m;
int *w = (int*)&m[3][0];



printf("m %u\n", m);
printf("m[0] %u\n", m[0]);
printf("p %u\n", p);
printf("m+1 %u\n", m+1);
printf("m[1] %u\n", m[1]);
printf("p + 3 %u\n", p+3);
printf("m[0][0] %u\n", m[0][0]);
printf("*m[0] %u\n", *m[0]);
printf("*p %u\n", *p);
printf("p[0] %u\n", p[0]);
printf("m[3][1] %u\n", m[3][1]);
printf("*(m[3] + 1) %u\n", *(m[3] + 1));
printf("*(*(m+3)+1) %u\n", *(*(m+3)+1));
printf("*(p+(3*2)+1) %u\n", *(p+(3*2)+1));
printf("w[1] %u\n", w[1]);
printf("*(w+1) %u\n", *(w+1));




    

}