#include <stdio.h>
#define tam 10

int main() {
int i, j, somaL=0, somaD=0, mat[tam][tam];

printf("*** Matriz 10x10 ***\n");
printf("Digite os números: \n");

for (i=0;i<tam;i++){
for (j=0;j<tam;j++){
scanf("%d", &mat[i][j]);
}
}

for (i=0;i<tam;i++)
somaL = (somaL + mat[1][i])/ somaL;
for (i=0;i<tam;i++)
somaD = (somaD + mat[i][i])/ somaL;
printf("A média da soma dos elementos é: %d.\n", somaL);
return 0;
}