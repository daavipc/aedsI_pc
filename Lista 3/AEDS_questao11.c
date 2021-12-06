#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
float valor_carro;

printf("Digite o valor do carro: ");

scanf("%f\\n",&valor_carro); 

printf("\n------------------------------\n");

printf("À vista: %.2f (20%% de desconto)\n",(valor_carro)-(valor_carro*20/100));

printf("6x = %.2f(acrescimo de 3%%)\n",(valor_carro*3/100)+(valor_carro)); 

printf("12x = %.2f(acrescimo de 6%%)\n",valor_carro*6/100+(valor_carro));

printf("18x = %.2f(acrescimo de 9%%)\n",valor_carro*9/100+(valor_carro));

printf("24x = %.2f(acrescimo de 12%%)\n",valor_carro*12/100+(valor_carro)); 

printf("30x = %.2f(acrescimo de 15%%)\n",valor_carro*15/100+(valor_carro));

printf("36x = %.2f(acrescimo de 18%%)\n",valor_carro*18/100+(valor_carro));

printf("42x = %.2f(acrescimo de 21%%)\n",valor_carro*21/100+(valor_carro)); 

printf("48x = %.2f(acrescimo de 24%%)\n",valor_carro*24/100+(valor_carro));

printf("54x = %.2f(acrescimo de 27%%)\n",valor_carro*27/100+(valor_carro));

printf("60x = %.2f(acrescimo de 30%%)\n",valor_carro*30/100+(valor_carro));

}