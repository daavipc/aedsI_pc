#include <stdio.h>

int main(){
int n;
int i;    
int mdc;  
int numero;  
int novo_mdc;
int divisor; 

printf("Digite um número ");
scanf ("%d", &n);

printf("Digite outro número: ");
scanf ("%d", &mdc);

i = 1;
while (i < n){
    
printf("Entre com o %do. numero da sequencia: ", i+1);
scanf ("%d", &numero);
i = i + 1;

divisor = 1;
while (divisor <= mdc && divisor <= numero){
if (mdc % divisor == 0 && numero % divisor == 0){
novo_mdc = divisor;                
}
divisor = divisor + 1;
}

mdc = novo_mdc;
}

printf("MDC = %d\n", mdc);
return 0;
} 