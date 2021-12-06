#include<stdio.h>
#include<conio.h>

#define TF 10

int main (){

int vet1[TF],vet2[TF];

int i;

for(i=0;i<TF;i++)

{

printf("Digite o %d numero do vet1:",i+1);

scanf("%d",&vet1);

}

for(i=0;i<TF;i++)

{

if(vet1>0)

vet2=vet1;

else

vet3=vet1;

}

for(i=0;i<TF;i++)

{

if(vet2>0)

printf("Soma %d\n",vet2);

}

for(i=0;i<TF;i++)

{

}