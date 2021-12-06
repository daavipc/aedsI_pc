#include <stdio.h>
#include <stdlib.h>


int main(void)
{

double custo, operacao, final;

// #Formatando
printf("------------------------------ \n");

// Entrada de dados
printf("Digite o custo de fábrica: ");
scanf("%lf", &custo);


// #Formatando
printf("------------------------------ \n");


// Lógica
if(custo > 1 || custo <= 12000){
operacao = custo * 1.05;
printf("O valor final será de R$%.1f\n",operacao);
}else if(custo > 12000 || custo < 25000){
operacao = custo * 1.1 * 1.15;
printf("O valor final será de R$%.1f\n",operacao);
}else if(custo >= 25000){
operacao = custo * 1.15 * 1.2;
printf("O valor final será de R$%.1f\n",operacao);
}else{
printf("Erro.");
}

return 0;
}