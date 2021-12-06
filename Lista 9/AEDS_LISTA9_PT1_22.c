#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#define n 50

int main(){
char cmaior, cmenor;
char v[n];
size_t maior = 1, menor = n, i, temp = 1;
printf("\nDigite a string: ");
fgets(v, n, stdin);
v[strlen(v)-1] = '\0';
cmaior = v[0];

for (i = 0; i < strlen(v); i++){
if (v[i] == v[i+1]){
temp++;
}
else{
if (temp > maior){
maior = temp;
cmaior = v[i];
}

if (temp < menor){
menor = temp;
cmenor = v[i];
}
temp = 1;
}
}

printf("\nMaior: %c, tamanho %zu; Menor: %c, tamanho %zu\n", cmaior, maior, cmenor, menor);

}