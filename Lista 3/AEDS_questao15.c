#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
int quantidadeEntrevistados = 2; 

int quantidadeSim = 0; 
int quantidadeNao = 0;

int quantidadeFeminino = 0; 
int quantidadeMasculino = 0;

double porcentagemFeminino = 0.0; 
double porcentagemMasculino = 0.0; 

char sexo = ' ';
char resposta = ' ';

for (int i = 0; i < quantidadeEntrevistados; ++i) {
printf("-------------------------------------------------- \n");
printf("Entrevistado [ %i de %i ] \n", (i + 1), quantidadeEntrevistados);

do {
printf("Digite seu sexo [ F / M ]: ");
scanf(" %c%*c", &sexo);
sexo = (char) toupper(sexo);
} while (sexo != 'F' && sexo != 'M');

do {
printf("Digite sua resposta [ S / N ]: ");
scanf(" %c%*c", &resposta);
resposta = (char) toupper(resposta);
} while (resposta != 'S' && resposta != 'N');

printf("-------------------------------------------------- \n");

switch (sexo) {
case 'F':
quantidadeFeminino += 1;
break;
case 'M':
quantidadeMasculino += 1;
break;
default:
printf("[ E ]: Essa mensagem nao deveria ser exibida. Verifique o do-while do sexo. \n");
exit(EXIT_FAILURE);
}

switch (resposta) {
case 'S':
quantidadeSim += 1;

if (sexo == 'F') {
porcentagemFeminino += 1;
}
break;
case 'N':
quantidadeNao += 1;

if (sexo == 'M') {
porcentagemMasculino += 1;
}
break;
default:
printf("[ E ]: Essa mensagem nao deveria ser exibida. Verifique o do-while da resposta. \n");
exit(EXIT_FAILURE);
}
}

porcentagemFeminino = (quantidadeFeminino != 0)
? porcentagemFeminino * 100 / quantidadeFeminino
: 0.0;

porcentagemMasculino = (quantidadeMasculino != 0)
? porcentagemMasculino * 100 / quantidadeMasculino
: 0.0;

return EXIT_SUCCESS;
}