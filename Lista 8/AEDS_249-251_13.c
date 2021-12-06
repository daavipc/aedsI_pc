#include <stdio.h>
int main(){
int mat[6][4];
int i,
j; 
int maiornumero;
int linhamaiornumero;

printf("\n Informe os numeros da matriz: \n");
for(i=0;i<6;i++){
for(j=0;j<4;j++){
scanf("%i", &mat[i][j]);
if(j==0)
maiornumero = mat[i][j];
else if(mat[i][j]>maiornumero)
maiornumero = mat[i][j];
}
for(j=0;j<4;j++){
mat[i][j]*=maiornumero;
}
}


printf("A matriz resultante da multiplicacao do maior elemento da linha e: \n");

for (i=0;i<6;i++){
for(j=0;j<4;j++){
printf("%i ",mat[i][j]);
}
printf("\n");
}
getch();
return 0;
}