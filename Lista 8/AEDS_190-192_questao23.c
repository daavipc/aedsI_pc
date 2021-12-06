#include <stdio.h>
#include <stdlib.h>

int main(){
int i, vet_a[10], vet_b[10], soma_vetor = 0, subtr = 0;
printf(" Digite os valores do vetor A\n");
for (i = 0; i < 10; i++){
printf(" Vetor A [%d]:",i+1);
scanf("%d", &vet_a[i]);            
}
printf("\n Digite os valores do vetor B\n");
for (i = 0; i < 10; i++){
printf(" Vetor B [%d]:",i+1);
scanf("%d", &vet_b[i]);            
} 
for (i = 0; i < 10; i++){
subtr = vet_a[i] - vet_b[9 - i];
soma_vetor += subtr;            
printf("\n Vetor A [%d] - Vetor A [%d] = %d",i+1,10-i,subtr);
}   
printf("\n Soma das subtracoes: %d\n",soma_vetor);

return 0;

}