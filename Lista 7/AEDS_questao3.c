#include <stdio.h>

int fibonacci(int n) {
int x;
if (n == 1) {
return(1);
}
if (n == 2) {
return(1);
}
x = fibonacci(n-1) + fibonacci(n-2);
return(x);
}

int main() {
int n,i;

printf("Número de termos: ");
scanf("%d", &n);

for (i = 1; i <= n; i++) {
printf("%d \n", fibonacci(i));
}
printf("\n");
return(0);
}