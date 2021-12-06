#include <stdio.h>

int tamanho=10;

int main() {
int A[tamanho], B[tamanho], i;

printf("Digite 10 números: \n");
for (i=0;i<tamanho;i++){
scanf("%d", &A[i]);
}
for (i=0;i<tamanho;i++){
if (A[i]==0)
B[i]=1;
else
B[i]=A[i];
}
for (i=0;i<tamanho;i++)
printf("A[%d]=%d\n", i, A[i]);
for (i=0;i<tamanho;i++)
printf("B[%d]=%d\n", i, B[i]);	
return 0;
}