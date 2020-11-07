

1) Escreva um trecho de código que reproduza a ilustração

void main(){

int v[] = {1,2,3,4};
int *p = v;

int i = 30;

int *x = &i;
int *w = &v[2];

2)Determine os valores com base na ilustração

p = #20
v = #20
&v[0] =#20
*(v+2)= #24
w= 3
*w=#28
w[1]=3
x=4
&x=#60
*x=#70
x[0]= 30
p+3 = 4
&p[3]=#32
*(p+3)=4
p[3] = 4









3)Escreva um trecho de código que imprima os valores 1, 2, 3 e 4 a
partir da variável p. Utilize a notação de sua preferência.

int k = 0;
for(k = 0; k<4;k++){

printf(" %d \n", v[k]);