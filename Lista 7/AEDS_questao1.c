#include <stdio.h>

int potencia(int base, int expoente){

if(expoente == 0)
return 1;
else
return (base * potencia(base, expoente-1));
}

int main(){
int base, expoente, resultado;
resultado = potencia(base,expoente);

printf("Digite o valor de X: ");
scanf("%d", &base);
printf("Digite o valor de Y: ");
scanf("%d", &expoente);

printf("%d elevado a %d = %d", base, expoente,resultado);
return 0;
}
