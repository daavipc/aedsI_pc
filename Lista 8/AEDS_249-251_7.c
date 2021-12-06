#include <stdio.h>
#define LIN1 4
#define COL1 6
#define LIN2 6
#define COL2 4
int main (){
    
int matM[LIN1][COL1],matN[LIN2][COL2],i,j,soma1[LIN1]={0},soma2[LIN1]={0},soma_res[LIN1]={0};

for (i=0;i<LIN1;i++){
for(j=0;j<COL1;j++){

printf("Digite o elemento [%d][%d] da Matriz M: ",i,j);
scanf("%d",&matM[i][j]);
}
}


printf("Matriz N:\n");
for (i=0;i<LIN2;i++){
for(j=0;j<COL2;j++){

printf("Digite o elemento [%d][%d] da Matriz N: ",i,j);
scanf("%d",&matN[i][j]);
}
}

for (i=0;i<LIN1;i++){
for(j=0;j<COL1;j++){
soma1[i]= soma1[i]+matM[i][j];

}
}

for (i=0;i<COL2;i++){
for(j=0;j<LIN2;j++){
soma2[i]= soma2[i]+matM[j][i];

}
}

for (i=0;i<LIN1;i++){
soma_res[i]= soma1[i]+soma2[i];

}

printf("\n\nSoma das linhas da Matriz M com as colunas da Matriz N:\n\n");
for (i=0;i<LIN1;i++){

printf("%d ",soma_res[i]);
}
printf("\n");

}