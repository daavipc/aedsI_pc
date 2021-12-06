#include <stdio.h>
#include <stdlib.h>


int main(void)
{

double idade;

// #Formatando
printf("------------------------------ \n");

// Entrada de dados
printf("Digite a idade do nadador: ");
scanf("%lf", &idade);

// #Formatando
printf("------------------------------ \n");

// Lógica
if(idade > 5 || idade < 7){
printf("Categoria Infantil");    
}else if(idade > 8 || idade < 10){
printf("Categoria Juvenil");
}else if(idade > 11 || idade < 15){
printf("Categoria Adolescente");
}else if(idade > 16 || idade < 30){
printf("Categoria Adulto");
}else if(idade > 30){
printf("Categoria Senior");
}else if(idade < 5){
printf("Sem categoria");
}else{
printf("Erro");
}

return 0;
}