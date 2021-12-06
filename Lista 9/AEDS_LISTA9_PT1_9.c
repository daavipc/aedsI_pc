#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

int x,tam;
char nome[100];
printf("Digite uma frase: ");
gets(nome);
tam = length(nome);

for (x=1; x <= tam; x++){
printf("%c",nome);
}

return 0;
}