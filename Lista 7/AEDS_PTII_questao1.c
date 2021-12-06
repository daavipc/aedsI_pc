#include <stdio.h>

int cal(int n, int A[n], int i){
if(i < n){
printf("%d", A[i]));
cal(n, A[n], i+ 1);
}else{
main();
}
}

int main(){
int opc;

do{
printf("1 - Função A \n");
printf("1 - Função B \n");
printf("1 - Função C \n");
printf("1 - Função D \n");
printf("0 - Sair \n");
printf("Digite um número");
scanf("%d", &opc);

int n;
printf("Qntdd variaveis: ");
scanf("%d", &n);

int A[n];
int i = 0;
for(i = 0; i < n; i++){
printf("Valor da variável: ");
scanf("%d", &A[i]);
}
i = 0;

if(opc == 1){
cal(n, A[n], i);
}
else if(opc == 2){

}else if(opc == 3){

}else if(opc == 4){

}while(opc != 0);


}