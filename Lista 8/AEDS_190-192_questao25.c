#include <stdio.h>
#define N 15

void imprime(int vetor[], float vetor2[], float div){
int i;
for(i=0;i<N;i++){
printf("%d / %.0f = %.2f\n",vetor[i],div,vetor2[i]);
}
}
void divide(int vetor[], float div, float vetor2[]){
int i;
for(i=0;i<N;i++){
vetor2[i]=vetor[i]/div;
}
}
float maior(int vetor[]){
int i;
float ultimo;
ultimo=vetor[0];
for(i=0;i<N;i++){
if(vetor[i]>ultimo){
ultimo=vetor[i];
}
}
return ultimo;
}
void preenche(int vetor[]){
int i;
for(i=0;i<N;i++)
scanf("%d",&vetor[i]);
}
int main(){
float vetor2[N], div;
int vetor[N];
printf("Digite %d posições: ",N);
preenche(vetor);
div=maior(vetor);
divide(vetor,div,vetor2);
imprime(vetor,vetor2,div);
return 0;
}