#include <stdio.h>
#include <stdlib.h>


int main(void)
{

double salario, operacao;

// #Formatando
printf("------------------------------ \n");

// Entrada de dados
printf("Digite o seu salário: ");
scanf("%lf", &salario);


// #Formatando
printf("------------------------------ \n");


// Lógica
if(salario > 0 || salario <= 300){
operacao = salario * 1.5;
printf("Seu salário reajustado será de R$%.1f\n",operacao);
}else if(salario > 300 || salario <= 500){
operacao = salario * 1.4;
printf("Seu salário reajustado será de R$%.1f\n",operacao);
}else if(salario > 500 || salario <= 700){
operacao = salario * 1.3;
printf("Seu salário reajustado será de R$%.1f\n",operacao);
}else if(salario > 700 || salario <= 800){
operacao = salario * 1.2;
printf("Seu salário reajustado será de R$%.1f\n",operacao);
}else if(salario > 800 || salario <= 1000){
operacao = salario * 1.1;
printf("Seu salário reajustado será de R$%.1f\n",operacao);
}else if(salario > 1000){
operacao = salario * 1.05;
printf("Seu salário reajustado será de R$%.1f\n",operacao);
}else{
printf("Erro.");
}

return 0;
}