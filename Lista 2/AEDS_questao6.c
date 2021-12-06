#include <stdio.h>
#include <stdlib.h>


int main(void)
{

double n1, n2, elevado, raizquadrada, raizcubica, raizquadrada2, raizcubica2, numero, res=1,c;
c=n2;

// #Formatando
printf("------------------------------ \n");

// Entrada de dados
printf("Digite o primeiro número: ");
scanf("%lf", &n1);

printf("Digite o segundo número: ");
scanf("%lf", &n2);

// Lógica
while (n2>0)
{
elevado=elevado*n1;
n2--;
}

// #Formatando
printf("------------------------------ \n");
printf("Digite 1 para saber elevação | 2 para saber a raiz quadrada | 3 para saber a raiz cúbica: \n");
scanf("%lf", &numero);
printf("------------------------------ \n");

// Saída
if(numero == 1){
printf("A elevação é %.1f\n",elevado);
}else if(numero == 2){
printf("A raiz quadrada de número 1 é: %.1f\n",raizquadrada, sqrt(raizquadrada));
}








return 0;
}