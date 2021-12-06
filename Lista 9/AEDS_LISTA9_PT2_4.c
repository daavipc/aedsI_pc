#include<stdio.h>
#include<string.h>
#include<locale.h>

int main() {
int i, valor = 0;
char palavra[15], inversa[15];

printf("\nDigite uma palavra: ");
gets(palavra);

for(i = 0; palavra[i]; i++){
palavra[i] = tolower(palavra[i]);
}

strcpy(inversa, palavra);

strrev(inversa);

valor = strcmp(palavra, inversa);

if (valor == 0)
printf("\nA palavra %s é palíndroma\n", palavra);
else
printf("\nA palavra %s não é palíndroma\n", palavra);

return 0;
}