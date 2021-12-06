#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(char){
char frase[100];
int i=0,vogal;
printf("Digite uma frase :\n\n");
scanf("%s[^\n]",frase);
vogal=frase;

vogal=toupper(vogal);
for(i=0;i<strlen(frase);i++){
if(vogal=='a' || vogal=='e' || vogal=='i' || vogal=='o' || vogal=='u' ||
vogal=='A'|| vogal=='E' || vogal=='O' || vogal=='U')
{
frase='*';
}
}

printf(frase);

return 0;
}