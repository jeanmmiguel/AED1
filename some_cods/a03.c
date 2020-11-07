1) Escreva um trecho de código que reproduza a ilustração
acima

#include <stdio.h>

void main(){


int v1[] = {1,2,3};
int v2[] = {4,5,6};

int *p1 = v1;
int *p2 = v2;


long int *m[2];
long int ** pm  = m;

m[0] = &v1;
m[1] = &v2;

}

2)Escreva um trecho de código que imprima os valores 1, 2, 3, 4, 5 e 6. Utilize a notação de sua preferência.


int i = 0;
for(i = 0;i <3;i++){
printf("%d\n", (p1[i]) );

}



printf(" %d\n", (p2[0]) );

printf(" %d\n", (p2[1]) );

printf(" %d\n", (p2[2]) );

    }


3)
Determine os valores com base na ilustração
p1 : #20
m[0] :#20
v1 : #28
*(m+1) : #40 
p1 + 2 : #28
*pm[1] : #4
v1 + 2:#28
**(m+1): 4

p2[1]: 5
m[0][2] : 5

*(v2+1): 5
pm : #80

m : #50
pm+1: #58
*m : #20
*(pm+1) : #40
pm: #80
*(pm+1) + 2 : #48
*pm : #50
*(*(pm+1) + 2) : 6