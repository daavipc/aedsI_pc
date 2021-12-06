#include <stdio.h>
#include <stdlib.h>
int elementos(int m[2][4]){
int count = 0;
int i, j;
for(i=0;i<2;i++)
for(j=0;j<4;j++){
if(m[j] > 12 && m[j] < 20){
count++;
}
}
return (count);
}
float par(int m[2][4]){
int soma = 0;
int i, j;
for(i=0;i<2;i++)
for(j=0;j<4;j++){
if(m[i][0] % 2 == 0){
soma = soma + i;
}
}
for(i=0;i<2;i++)
for(j=0;j<4;j++){
if(m[0][j] % 2 == 0){
soma = soma + i;
}
}
float media;
media = soma / 2;
return (media);
}

int main(){
int m[2][4];
int i, j;
for(i=0;i<2;i++)
for(j=0;j<4;j++){
printf("Preenche a matriz M[%d][%d] \n",i, j);
scanf("%d",&m[i][j]);
}
printf("A quantidade de elementos entre 12 e 20 e: \n %d \n",elementos(m));
printf("A media dos elementos pares e: \n %f \n",par(m));
system("PAUSE");    
return 0;
}