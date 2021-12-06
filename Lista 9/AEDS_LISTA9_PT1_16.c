#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    
char texto[50];
int i,c, conta=0;

fgets(texto, 15, stdin);

c = strlen(texto);

printf("número de letras: %d", c);

for(i=0; texto[i] !=' '; i++){
conta++;
}
printf(" %d",conta);
return 0;
}