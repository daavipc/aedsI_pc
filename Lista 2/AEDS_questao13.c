#include <stdio.h>
#include <stdlib.h>


int main(void)
{

double preco, operacao;

// #Formatando
printf("------------------------------ \n");

// Entrada de dados
printf("Digite o preço do produto: ");
scanf("%lf", &preco);


// #Formatando
printf("------------------------------ \n");


// Lógica

if(preco > 1 || preco < 50){
operacao = preco * 1.05;
printf("O valor final será de R$%.1f\n",operacao);
if(operacao > 1 || operacao <= 80){
printf("Barato");    
}
}else if(preco > 50 || preco < 100){
operacao = preco * 1.1;
printf("O valor final será de R$%.1f\n",operacao);   
if(operacao > 80 || operacao <= 120){
printf("Normal");    
}
}else if(preco >= 100){
operacao = preco * 1.15;
printf("O valor final será de R$%.1f\n",operacao);    
if(operacao > 200){
printf("Muito caro");    
}
if(operacao > 120 || operacao <= 200){
printf("Caro");    
}
}

return 0;
}