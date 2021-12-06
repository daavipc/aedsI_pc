#include <stdio.h>
#define tam 5

int main() {
int i, j, somaL=0, somaD=0, mat[tam][tam];

printf("*** Matriz 5X5 ***\n");
printf("Digite os números: \n");

for (i=0;i<tam;i++){
for (j=0;j<tam;j++){
scanf("%d", &mat[i][j]);
}
}

for (i=0;i<tam;i++)
somaL = somaL + mat[1][i];
for (i=0;i<tam;i++)
somaD = somaD + mat[i][i];
printf("A soma dos elementos da segunda linha %d.\n", somaL);
printf("A soma dos elementos da diagonal principal %d.", somaD);
return 0;
}