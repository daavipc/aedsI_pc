#include <stdio.h>
#include <stdlib.h>

float calcCel (float f)
{
float c;
c =(f - 32)/1.8;
return c;     
}
float calcFah (float c)
{
float f;
f = c  / 5 * 9 + 32;
return f;     
}
int main(){
float Fahrenheit, Celsius;
int valor;
do{
printf("1. Converter de Fahrenheit para Celsius.\n");
printf("\n2. Converter de Celsius para Fahrenheit.\n");
scanf("%d", &valor);
}
while (valor != 1 && valor != 2);
if (valor == 1){
printf("\n\nDigite os graus Fahrenheit:\n\n");
scanf("%f", &Fahrenheit); 
Celsius = calcCel (Fahrenheit);      
}
else{
printf("\n\nDigite os graus Celsius:\n\n");
scanf("%f", &Celsius); 
Fahrenheit = calcFah (Celsius);      
}

printf("\nGraus Celsius: %.2f.\n\n"
"Graus Fahrenheit: %.2f.\n", Celsius, Fahrenheit);

}