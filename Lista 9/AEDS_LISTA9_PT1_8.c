#include <stdio.h>
#include <stdlib.h>
#define TAM 100

int main() {       
char palavra[TAM];
int repeticoes[MAX_CHARS];
int i, tamanho = 0;

printf("Digite uma palavra: \n" );
while (tamanho < TAM - 1 && (c = getchar()) != '\n') {
palavra[tamanho] = c;
tamanho++;
}
palavra[tamanho] = '\0';

for (i = 0; i < tamanho; i++) {
repeticoes[palavra[i]]++;
}

for (i = 0; i < MAX_CHARS; i++) {
if (repeticoes[i] > 0) {
printf("%c = %d\n", (char) i, repeticoes[i]);
}
}

for (i = tamanho - 1; i >= 0; i--) {
printf("%c", palavra[i]);
}
printf("\n");
}