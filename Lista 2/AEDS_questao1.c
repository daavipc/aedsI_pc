#include<stdio.h>
#include<stdlib.h>

int main()
{
double n1, n2, n3, n4, media;

// #Formatando
printf("------------------------------ \n");

//Entrada de dados
printf("Digite o primeiro número: ");
scanf("%lf",&n1);

printf("Digite o segundo número: ");
scanf("%lf",&n2);

printf("Digite o terceiro número: ");
scanf("%lf",&n3);

printf("Digite o terceiro número: ");
scanf("%lf",&n4);

// Lógica
media = (n1 + n2 + n3 + n4) / 4;

// #Formatando
printf("------------------------------ \n");

if(media >= 7){
printf("Você foi aprovado!\n");
}else{
printf("Você foi reprovado!\n");
}

return 0;
}
