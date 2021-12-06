#include <stdio.h>
#include <stdlib.h>


int main(void)
{

double senha;

// #Formatando
printf("------------------------------ \n");

// Entrada de dados
printf("Digite a senha para acesso: ");
scanf("%lf", &senha);

// #Formatando
printf("------------------------------ \n");

// Lógica
if(senha == 4531){
printf("Senha correta. Bem-vindo!");    
}else if(senha != 4531){
printf("Senha incorreta.");
}else{
printf("Erro.");
}

return 0;
}