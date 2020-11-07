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




printf(" *(m+1): %u\n",*(m+1));
printf(" p1: %u\n",p1);

printf(" m[0] :: %u\n",m[0]);

printf(" v1: %u\n",v1);

printf(" v2: %u\n",v2);

printf(" p1+2 : %u\n",p1+2);

printf(" *pm[1]: %u\n",*pm[1]);

printf(" v1 + 2: %u\n",v1 + 2);

printf(" **(m+1): %u\n",**(m+1));

printf(" p2[1]: %d\n",p2[1]);

printf(" m[0][2]: %u\n",m[0][2]);

printf(" *(v2+1): %u\n",*(v2+1));

printf(" pm: %u\n",pm);

printf(" m: %u\n",m);

printf(" pm+1: %u\n",pm+1);

printf(" *m: %u\n",*m);

printf(" *(pm+1): %u\n",*(pm+1));

printf("*(pm+1) + 2 : %d\n",*(pm+1) + 2 );


printf(" *pm: %u\n",*pm);

printf(" *(*(pm+1) + 2): %u\n",*(*(pm+1) + 2));





    
}