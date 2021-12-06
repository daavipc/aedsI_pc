#include <stdio.h>

int main() {
int a, b, c;
printf("\nEntre com os lados do triângulo: ");
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);

if ((a>b+c) || (b>a+c) || (c>a+b))
printf("\nNão formam um triângulo!");
else
if (a==b && b==c)
printf("\nÉ triângulo equilátero");
else
if (a==b || b==c || a==c)
printf("\nÉ triângulo isósceles");
else
printf("\nÉ triângulo escaleno");
return (0);
}