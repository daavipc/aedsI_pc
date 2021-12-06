#include <stdio.h>
#include <stdlib.h>


int main(void)
{

double salario, reajuste;

// #Formatando
printf("------------------------------ \n");

// Entrada de dados
printf("Digite o seu salário: ");
scanf("%lf", &salario);

// Lógica
reajuste = salario*1.3;

// #Formatando
printf("------------------------------ \n");

// Saída
if(salario > 500){
printf("Não há reajuste com o seu salário.");
}else if(salario < 500){
printf("Seu salário reajustado será de %.1f\n",reajuste);
}else{
printf("Erro.");
}

return 0;
}