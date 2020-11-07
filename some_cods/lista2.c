#include <stdio.h>

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

printf("p : %p\n",p);
printf("*p : %p\n",*p);
printf("**p : %u\n",**p);

printf("p[1] : %u\n",p[1]);
printf("*p[1] : %u\n",*p[1]);
printf("**(p+2) : %u\n",**(p+2));
printf("v posicao 3 : %u\n",v[3]);
printf("v+3 : %u\n",v+3);
printf("*(v+3) : %u\n",*(v+3));
printf("**(v+3) : %u\n",**(v+3));

printf("endereco v : %p\n",v);
printf("v  primeira casa : %u\n",v);


printf("p: %p\n",p);
printf("&p: %p\n",&p);
printf("*p: %p\n",*p);



printf("v: %p\n",v);
printf("&v: %p\n",&v);
printf("*v: %p\n",*v);





printf(" a :%d \n", **(p + 0));

printf(" b :%d \n", **(p + 1));


printf(" b :%d \n", **(p + 2));


printf(" c :%d \n", **(p + 3));

}