#include<stdio.h>
#include<string.h>

int main(){
char msg[999];
char crip_msg[999];
int tam_msg;
int i;

printf("\n Digite texto ou palavra a ser criptografada: ");
scanf("%s", &msg);

tam_msg = strlen(msg);

for(i=0;i<tam_msg;i++){
crip_msg[i] = msg[i] + 5;
}

printf("\n A mensagem criptografada e : %s\n\n", crip_msg);
printf(" Digite mensagem a ser descriptografada: ");

scanf("%s",&crip_msg);

tam_msg = strlen(crip_msg);

for(i=0;i<tam_msg;i++){
msg[i] = crip_msg[i] - 5;
}

printf("\n A mensagem descriptografada e : %s\n\n", msg);
return 0;
}