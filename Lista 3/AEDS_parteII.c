#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

main() {

int a, b, auxiliar, i, n;

a = 0;
b = 1;

printf("Digite um número: ");
scanf("%d", &n);
printf("------------------------------\n");
printf("Série de Fibonacci:\n\n");
if (n >= 0) printf("%d\n", a);
if (n >= 1) printf("%d\n", b);

for(i = 2; i <= n; i++) {

auxiliar = a + b;
a = b;
b = auxiliar;

printf("%d\n", auxiliar);
}
}