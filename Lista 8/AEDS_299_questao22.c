#include <stdio.h>
#include <stdlib.h>

int soma(int m[10][10]){
int i, j;
int soma = 0;
for(i=6;i<10;i++)
for(j=0;j<10;j++){
soma = soma + m[i][j];
}
return(soma);
}
int main()
{
int m[10][10];
int i, j;
for(i=0;i<10;i++)
for(j=0;j<10;j++){
printf("Preenche a matriz M[%d][%d] \n",i,j);
scanf("%d",&m[i][j]);
}
printf("A soma e: \n %d \n",soma(m));
system("PAUSE");    
return 0;
}