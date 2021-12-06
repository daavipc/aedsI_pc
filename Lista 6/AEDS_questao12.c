#include <stdio.h>
#include <math.h>


int X_elevado_a_Z(int X, int Z){
int i,potencia=1;
for (i=1; i<=Z; i++)
potencia = potencia*X;
return (potencia);
}
int main ()
{
int a,b;
printf("Escreva X\n");
scanf("%d", &a);
printf("Escreva Z\n");
scanf("%d", &b);
printf("\n------------------------\nX elevado a Z = %d"), X_elevado_a_Z(a,b);

} 