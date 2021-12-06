#include <stdio.h>
#include <stdlib.h>


int main(void)
{

double valor, tipo, operacao;

// #Formatando
printf("------------------------------ \n");

// Entrada de dados
printf("Digite o valor: ");
scanf("%lf", &valor);

printf("Digite o tipo: \n");
printf("1- Poupança \n2- Fundos de renda fixa \n");
scanf("%lf", &tipo);

// #Formatando
printf("------------------------------ \n");

// Lógica
if(tipo == 1){
operacao = valor * 1.03;    
printf("O valor investido após 1 mês será de R$%.1f\n",operacao);
}else if(tipo == 2){
operacao = valor * 1.04;    
printf("O valor investido após 1 mês será de R$%.1f\n",operacao);    
}else{
printf("Erro.");
}

return 0;
}