#include <stdio.h>
#include <stdlib.h>
#define m 2
#define n 2

void main(){

int i,j,k;

int ma1[m][n],ma2[m][n], ma3[m][n];

printf("Digite os elementos da matriz 1");

printf("\n\n");

for(i=0;i<m;i++){

for(j=0;j<n;j++){

scanf("%i",&ma1[j]);

}

}

printf("\n\n");

printf("Digite os elementos da matriz 2");

printf("\n\n");

for(i=0;i<m;i++){

for(j=0;j<n;j++){

scanf("%i",&ma2[j]);

ma3[j]=0;

}

}

for(i=0;i<m;i++){

for(j=0;j<n;j++){
    
for(k=0;k<m;k++){
    
ma3[j]=ma3[j]+(ma1[k]*ma2[j][k]);
}
}
}
printf("\n\n");
printf("As matrizes multiplicadas geram a matriz abaixo");
printf("\n\n");

for(i=0;i<m;i++){

printf("\n");

for(j=0;j<n;j++){
printf("%i",ma3[j]);
printf("\n\n");

}
}

}