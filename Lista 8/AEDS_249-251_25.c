#include <stdio.h>
#include <stdlib.h>

int quant_estocada(int estoque[5][10]){
int i, j;
int soma[5];
for(i=0;i<5;i++)
for(j=0;j<10;j++){
soma[i] = estoque[i][j];
}
for(i=0;i<5;i++){
printf("A quantidade estocada do armazem [%d] e: %d",i, soma[i]);
}
}
float preco(int estoque[5][10], float preco[10]){
int maior = estoque[0][0];
int maior_estoque;
int i, j;
for(i=0;i<5;i++)
for(j=0;j<10;j++){
if(estoque[i][j] > maior){
maior_estoque = j;
}
}
printf("\n O preço do produto com maior estoque e: %f",preco[maior_estoque]);
}
int menor_estoque(int estoque[5][1]){
int menor = estoque[0][0];
int i, j;
for(i=0;i<5;i++)
for(j=0;j<10;j++){
if(estoque[i][j] < menor){
menor = j;
}
}    
printf("\n O menor estoque e: %d",menor);
}           

int main(){
float preco[10];
int estoque[5][10];
int i, j;
for(i=0;i<10;i++){
printf("Informe o preco dos 10 produtos \n");
scanf("%f",&preco[i]);
}
for(i=0;i<5;i++)
for(j=0;j<10;j++){
printf("Digite o numero do armazem e a quantidade estocada desses produtos, preenchendo a matriz M[%d][%d]\n",i,j);
scanf("%d",estoque[i][j]);
}
system("PAUSE");
return(0);
}