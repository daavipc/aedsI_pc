#include <stdio.h>
#include <stdlib.h>

void main()
{
int m[5][5];
int i, j, k, aux;

printf("Digite os valores da matriz:\n");
for (i=0; i<5; i++)
for (j=0; j<5; j++)
scanf("%d", &m[i][j]);

for (i=0; i<5; i++) {
printf("\n");
for (j=0; j<5; j++)
printf("%d \t", m[i][j]);
}
printf("\n\n");

i = 0;
k = 4;
for (j=0; j<5; j++) {
aux = m[i][j];
m[i][j] = m[k][j];
m[k][j] = aux;
k--;
i++;
}

for (i=0; i<5; i++) {
printf("\n");
for (j=0; j<5; j++)
printf("%d \t", m[i][j]);
}
}