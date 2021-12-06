#include <stdio.h>
#include <stdlib.h>

int dez(int z){
    
int con2=0,con=0;

while(con2<10){
    
if(z%2==0){
con++;
}

if(con==2){
return z;
}
con2++;
}
}

int main(){
    
int x[3],i=0, num=0;
printf("3 primeiros primos acima de 100: %d", dez(num));
system("pause");
return 0;
}