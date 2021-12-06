#include <stdio.h>
#include <stdlib.h>


int main(void)
{

double horas, horas_convertida, faltas, operacao;

// #Formatando
printf("------------------------------ \n");

// Entrada de dados
printf("Digite o número de horas extras: ");
scanf("%lf", &horas);

printf("Digite o número de faltas: ");
scanf("%lf", &faltas);


// #Formatando
printf("------------------------------ \n");

// Lógica
horas_convertida = horas*60;
operacao = horas_convertida - (2/3 * faltas);

if(operacao >= 2400){
printf("Prêmio de R$500");
}else if((operacao > 1800) || (operacao < 2400)){
printf("Prêmio de R$400");   
}else if((operacao > 1200) || (operacao < 1800)){
printf("Prêmio de R$300");   
}else if((operacao > 600) || (operacao < 1200)){
printf("Prêmio de R$200");   
}else if(operacao < 600){
printf("Prêmio de R$100");   
}else{
printf("Erro.");
}


return 0;
}