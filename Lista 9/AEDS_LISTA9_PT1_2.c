#include <stdio.h>
#include <string.h> 
#define Dim 100

void main(){
char frase[Dim];
int tamanho,i,espacoantesbrancos=0;

printf("Digite uma frase: \n",Dim);
gets(frase);

tamanho=strlen(frase);

for (i = espacoantesbrancos; i < tamanho; i++)
{

if (frase[i] != ' ')
{
printf("%c", frase[i]);
}

if (frase[i] == ' ')
{
printf("\n");
}
}

}