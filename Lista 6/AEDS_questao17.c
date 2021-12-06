#include <stdio.h>
#include <stdlib.h>

int main(){
    
int n1,n2,resto;

printf("Digite dois numeros: ");
scanf("%d%d", &n1, &n2);

resto=n1%n2;
while(resto!=0){
n1 = n2;
n2 = resto;
resto = n1%n2;         
}

printf("O MDC é: %d\n", n2);
}