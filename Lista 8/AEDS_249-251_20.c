#include <stdlib.h>
#include <stdio.h>

int main(){
int lin,col;
int mat[5][5];
int maior=0;
int soma;

for(lin=0; lin<=4; lin++){
for(col=0; col<=4; col++){
printf("Digite um número para linha %d e um número para coluna %d: ", lin+1,col+1);
scanf("%d", &mat[lin][col]);
}
printf("\n");
}

printf("\n Matriz:\n\n");

for(lin=0; lin<=4; lin++){
for(col=0; col<=4; col++){
printf("%d\t ",mat[lin][col]);
}
printf("\n\n");
}

for(lin=0; lin<=4; lin++){
for(col=0; col<=4; col++){
if(mat[lin][col] > maior){
maior = mat[lin][col];			
}
}
}

for(lin = 0; lin < 4; lin++){
mat[lin][lin] = 0;
soma = mat[lin][lin] + maior;
}

printf("\n Maior será: %d", maior);

printf("\n\n");
system("pause");
return 0;

}