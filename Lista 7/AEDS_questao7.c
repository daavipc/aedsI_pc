#include <stdio.h>

int seq(int n) {
int x;
if (n == 1) {
return(1);
}
if (n == 2) {
return(1);
}
x = seq(n-1) + seq(n-2);
return(x);
}

int main() {
int n,i, soma;

printf("Número de termos: ");
scanf("%d", &n);

for (i = 2; i <= n; i++) {
    
soma = n + n;

printf("1/%d + ", seq(i));
printf("= %d + ", soma);
}
printf("\n");
return(0);
}