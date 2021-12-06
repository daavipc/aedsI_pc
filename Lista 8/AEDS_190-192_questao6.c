#include <stdio.h>
#include <string.h>

int main(){
float menor,maior=0,comissao[3],total=0,total_vendas[3];
int i,maior_v_r,menor_v_r;
char vend [3][30];
for(i=0;i<3;i++){
printf("Digite o nome do %d%c vendedor : ",i+1,167);
fflush(stdin);
scanf("%s",vend[i]);
printf("Digite o valor da venda : R$ ");
scanf("%f",&total_vendas[i]);
printf("O valor da comissao ");
scanf("%f",&comissao[i]);
total+=total_vendas[i];
}
menor = total_vendas[0];
for(i=0;i<3;i++){
if (comissao[i] > maior){
maior = comissao[i];
maior_v_r=i;
}
else
if (comissao[i] < menor){
menor = comissao[i];
menor_v_r=i;
}
}
printf ("\n Recibo:");
for(i=0;i<3;i++){
printf("Vendedor : %15s | Comissão %.2f\n",vend[i],comissao[i]);
}
printf("\nA soma total das vendas é %.2f\n", total);
printf("A maior comissão é %.2f do vendedor %s\n", maior,vend[maior_v_r] );
printf("A menor comissão é %.2f do vendedor %s\n\n", menor,vend[menor_v_r] );
}