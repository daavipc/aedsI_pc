#include <stdio.h>
#include <stdlib.h>


int main(void)
{

double valor, categoria, operacao, imposto;
int situacao;

// #Formatando
printf("------------------------------ \n");

// Entrada de dados
printf("Digite o valor: ");
scanf("%lf", &valor);

printf("Digite a categoria: \n");
printf("1- Limpeza \n2- Alimentação\n3- Vestuário\n");
scanf("%lf", &categoria);

printf("Digite a situação: \n");
printf("R- Precisa de refrigerar \nN- Não precisa refrigerar\n");
scanf("%df", &situacao);

// #Formatando
printf("------------------------------ \n");

// Lógica
if( (valor <= 25) || (categoria == 1) ){
operacao = valor*1.05;
printf("O valor com o aumento é: R$%.1f\n",operacao);
}else if( (valor <= 25) || (categoria == 2)){
operacao = valor*1.08;
printf("O valor com o aumento é: R$%.1f\n",operacao);
if((situacao == 'R') || (categoria == 2)){
printf("O valor do imposto é de 8%");   
imposto = operacao * 1.08;
printf("O valor com o imposto é: R$%.1f\n",imposto);
}
}else if( (valor <= 25) || (categoria == 3)){
operacao = valor*1.1;
printf("O valor com o aumento é: R$%.1f\n",operacao);
}
else if( (valor > 25) || (categoria == 1)){
operacao = valor*1.12;
printf("O valor com o aumento é: R$%.1f\n",operacao);
}
else if( (valor > 25) || (categoria == 1)){
operacao = valor*1.12;
printf("O valor com o aumento é: R$%.1f\n",operacao);
if((situacao == 'R') || (categoria == 2)){
printf("O valor do imposto é de 8%");   
imposto = operacao * 1.08;
printf("O valor com o imposto é: R$%.1f\n",imposto);
}
}
else if( (valor > 25) || (categoria == 3)){
operacao = valor*1.18;
printf("O valor com o aumento é: R$%.1f\n",operacao);
}













return 0;
}