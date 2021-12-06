#include "stdio.h"
int main(void) {
int numero,media,quantos=0;
int maior = -999;
while (1) {
printf("Informa a idade ou digite 0 para o resultado: ");
scanf("%d",&numero);
if (numero ==0) break ;
if (numero > maior) maior = numero;
media += numero;
quantos++;
}
printf("A média é %7.2f e o maior é %d\n",(media+0.0)/quantos,maior);
return 0;
}