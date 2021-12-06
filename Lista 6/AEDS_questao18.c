#include <stdio.h>
#include <stdlib.h>

int numero(int m){
int con=0,x;
for(x=1; x<=m; x++)
{
if(m%x==0)
con++;
}

if(con==2)
return 1;
else
return 0;
}

void SalvaPrimos(int vet[3]){
int cont=0,i,x;

for(i=100;cont<11;i++)
{
x=numero(i);

if(x==1)
{
vet[cont]=i;
cont++;
}
}
}

void Exibe(int vet[3])
{
int i;

printf("Os três primeiros números primos: \n");

for(i=0;i<3;i++)
printf("\n%dº: %d",i+1,vet[i]);

printf("\n\n");
}

int main()
{
int vet[3];

SalvaPrimos(vet);
Exibe(vet);

return 0;
}