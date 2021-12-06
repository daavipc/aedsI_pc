#include<stdio.h>
#include<stdlib.h>

int main()
{
double n1, n2, media;

// #Formatando
printf("------------------------------ \n");

//Entrada de dados
printf("Digite o primeiro número: ");
scanf("%lf",&n1);

printf("Digite o segundo número: ");
scanf("%lf",&n2);

// Lógica
media = (n1 + n2) / 2;

// #Formatando
printf("------------------------------ \n");

if(media < 1 || media > 3 ){
printf("Reprovado");
}else if(media < 3 || media > 7){
printf("Exame");
}else if(media < 7 || media > 10){
printf("Aprovado.");    
}

return 0;
}
