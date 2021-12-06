#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    
float a1,r,an,Sn,q;
int op,n = 1, soma;

do{
printf("\nEntre com o valor do primeiro termo: ");
scanf("%f",&a1);
printf("\nEntre com o valor da razão: ");
do{ 
scanf("%f",&r);
}
while(n<=0);    
an = (a1 + (n - 1) * r);
Sn = (n*(a1 + an))/2;
soma = an + Sn;

printf("\nEnésimo termo da P.A. - an: %.2f\n",an);
printf("Soma: %d",soma);
break;
}
while(op != 3);
}