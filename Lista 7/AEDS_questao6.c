#include <stdio.h>

int mdc(int a, int b);
int main(){
int n1, n2, resp;

printf("Digite dois números: ");
scanf("%d %d", &n1,&n2);
resp = mdc(n1,n2);
printf("Resultado: %d", resp);
return 0;
}

int mdc(int a, int b){
if(a%b==0){
return b;
}
else{
return mdc(b, (a%b));
}
}