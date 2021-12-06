#include <stdio.h>
#include <stdlib.h>


int main(void)
{

double codigo, quantidade, operacao;

// #Formatando
printf("------------------------------ \n");

// Entrada de dados
printf("Digite o código do produto: ");
scanf("%lf", &codigo);

printf("Digite a quantidade de produtos: ");
scanf("%lf", &quantidade);

// #Formatando
printf("------------------------------ \n");

// Lógica
if( (codigo > 1) || (codigo < 10)){
printf("O preço unitário é de R$10 \n");
operacao = quantidade*10;
printf("Valor da nota será de R$%.1f\n",operacao);
if( (operacao > 1) || (operacao <= 250) ){
operacao = operacao - 1.05;
printf("Valor da nota com desconto será de R$%.1f\n",operacao);
}
}else if( (codigo > 11) || (codigo < 20)){
printf("O preço unitário é de R$15 \n");
operacao = quantidade*15;
printf("Valor da nota será de R$%.1f\n",operacao);
if( (operacao > 250) || (operacao <= 500) ){
operacao = operacao - 1.1;
printf("Valor da nota com desconto será de R$%.1f\n",operacao);
}
}else if( (codigo > 21) || (codigo < 30)){
printf("O preço unitário é de R$20 \n");
operacao = quantidade*20;
printf("Valor da nota será de R$%.1f\n",operacao);
if( (operacao > 500)){
operacao = operacao - 1.15;
printf("Valor da nota com desconto será de R$%.1f\n",operacao);
}
}else if( (codigo > 31) || (codigo < 40)){
printf("O preço unitário é de R$30 \n");
operacao = quantidade*30;
printf("Valor da nota será de R$%.1f\n",operacao);
}else{
printf("Erro");
}

return 0;
}