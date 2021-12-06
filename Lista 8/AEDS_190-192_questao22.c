#include <stdio.h>
#include <stdlib.h>
int main(){
const int tam=10;
int veta[tam], vetb[tam];
int i,j,cont=0;

printf("Entre com os valores do vetor!\n");
for(i=0;i<tam;i++){
printf("Vetor [%d]: ", i);
scanf("%d", &veta[i]);
}
for(i=0;i<tam;i++){
if(veta[i]>0){
vetb[cont]=veta[i];
cont++;
}

}

printf("\n\nVETOR FINAL!\n");
for(i=0;i<cont;i++){
printf("Vetor [%d]: %d\n", i, vetb[i]);

}


return 0;
}