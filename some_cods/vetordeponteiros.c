1) Escreva um trecho de código que reproduza a ilustração


void main(){

long int a = 10;
long int b = 20;
long int c = 30;
long int d = 40;

int *v[4];
int **p = v;

v[0] = &a;
v[1] = &b;
v[2] = &c;
v[3] = &d;

}


2)Determine os valores com base na ilustração

p : #40
*p :#70 
**p : 10
p[1] : #12
*p[1] : 20
**(p+2): 30
v : #40
v[3] : #26
v+3: #64
*(v+3) :#26 
**(v+3): 40

3)Escreva um t recho de código que imprima os valores 10, 20, 30 e 40. Não é permitido o uso de colchetes.
Utilize a notação de ponteiros (* e aritmética de ponteiro)


printf(" a :%d \n", **(p + 0));

printf(" b :%d \n", **(p + 1));


printf(" b :%d \n", **(p + 2));


printf(" c :%d \n", **(p + 3));
