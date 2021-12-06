#include <stdio.h>

int calculo(int num, int soma){


do{
num=num/10;
soma=soma+num;
}
while(num>0);

}

int main(){
int num, soma, resultado;

resultado = calculo(num,soma);

printf("Digite o número: ");
scanf("%d", &num);

printf("Soma: %d", resultado);

}
