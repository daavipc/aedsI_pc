#include <stdio.h>


int main(){
int n1, n2, res1, res2;
printf("Digite dois valores separados por espaço:\n");
scanf("%d %d", &n1, &n2);
res1 = soma(n1, n2);
printf("A soma é: %d\n", res1);
res2 = produto(n1, n2);
printf("\nO produto é: %d\n", res2);
return 0; 
}

int soma(int a, int b, int res1){
res1 = a + b;
}

int produto(int a, int b, int res2){
res2 = a * b;
}
