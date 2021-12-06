#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int pali(char palavra[], int tam, int i){
if(i > tam/2)
return 1;
if(palavra[i] == palavra[(tam-1)-i])
return pali(palavra, tam, i+1);
else 
return -1;
}

int main(){
    
char palavra[15];
int tam = 0;

printf("Escreva uma palavra: ");
scanf("%s", &palavra);

tam = strlen(palavra);

if(pali(palavra, tam, 0) > 0)
printf("%s é palíndromo", palavra);
else
printf("%s não é palíndromo", palavra);
return 0;
}