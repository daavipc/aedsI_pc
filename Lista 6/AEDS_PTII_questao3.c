#include <stdio.h>
#include <math.h>

int main(){
double a1, sn, termo;
int i, q, n = 1;
printf("Insira o 1º Terno: ");
scanf ( "%lf", &a1);
printf("Insira  a razão : ");
scanf ( "%d", &q);

termo=a1;
for (i=0; i<=n-1; i++){
printf("O termo da posição %d  = %.0f\n", i, termo);
termo=termo*q;
}
sn = ((a1*(pow(q,n) - 1))/(q-1));
printf("Soma dos termos da PG é: %.0f", sn);
return 0;
}