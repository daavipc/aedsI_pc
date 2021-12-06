#include <stdio.h>

int entrada_de_valores(int p, int contador, int limit);
int primo(int n, int div, int aux);
void line(void);

int main(void){
printf("A quantidade de numeros primos: %d numero(s)\n", entrada_de_valores(0, 0, 10));
line();
getchar();
return 0; }

int entrada_de_valores(int p, int contador, int limit){
if(contador<limit){
int numero;
printf("%d - Insira um numero inteiro: ", (contador+1));
scanf("%d", &numero);
line();
if(numero<0) { numero*=-1; }

if((numero==2)||(numero%2!=0)){
return entrada_de_valores(p+primo(numero, numero, 0), contador+1, limit);}

return entrada_de_valores(p, contador+1, limit); }

return p; }

int primo(int n, int div, int aux){
if((aux>1)|| (n == 1)|| (n==0)){ return 0; }
if(div>1){
if((n%div==0)||(n==2)){ return primo(n, div-1, aux+1); }

return primo(n, div-1, aux);  }

return 1;}

void line(void){ printf("------------------------------\n"); 

}
