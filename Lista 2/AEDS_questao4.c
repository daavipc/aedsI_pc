#include <stdio.h>

int maior(int a, int b, int c);

int main()
{
int a,b,c;
// #Formatando
printf("------------------------------ \n");

printf("\nDigite três números.\n");
scanf("%i%i%i",&a,&b,&c);

// #Formatando
printf("------------------------------ \n");
getchar();
printf("%i é o maior número \n",maior(a,b,c));

// #Formatando
printf("------------------------------ \n");
}

int maior(int a, int b, int c)
{
return(a>b?a:b>c?b:c);

return 0;
}