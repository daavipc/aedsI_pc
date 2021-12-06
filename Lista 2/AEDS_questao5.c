#include <stdio.h>
#include <stdlib.h>


int main(void)
{

double n1, n2, media, diferenca, produto, divisao, numero;

// #Formatando
printf("------------------------------ \n");

// Entrada de dados
printf("Digite o primeiro número: ");
scanf("%lf", &n1);

printf("Digite o segundo número: ");
scanf("%lf", &n2);

// Lógica
media = (n1 + n2)/2;
diferenca = n1-n2;
produto = n1*n2;
divisao = (n1/n2);

// #Formatando
printf("------------------------------ \n");
printf("Digite 1 para saber a média | 2 para saber a diferença | 3 para saber o produto | 4 para divisão: \n");
scanf("%lf", &numero);
printf("------------------------------ \n");
// Saída
if(numero == 1){
printf("A média é %.1f\n",media);

}else if(numero == 2){
printf("A diferença é %.1f\n",diferenca);

}else if(numero == 3){
printf("O produto é %.1f\n",produto);

}else if(numero == 4 || divisao != 0){
printf("A divisão é %.1f\n",divisao);

}else{
printf("Erro.");
}
return 0;
}s