#include <stdio.h>
#include <stdlib.h> 

int main(){   

int i =1, idade, idade_acum_otimo, opiniao, otimo =0, regular =0; 
float percentagem_bom, idade_media, bom =0.0; 

while(i <=5){      
printf("Informe a idade: \n");   
scanf("%i",&idade);       
printf("Informe a opinião: (ótimo - 3 | bom - 2 | regular - 1) \n");   
scanf("%i",&opiniao);      
if(opiniao ==3){  
otimo = otimo +1;     
idade_acum_otimo = idade_acum_otimo + idade;
}else if(opiniao ==2){   
bom = bom +1.0;  
}else if(opiniao ==1){   
regular = regular +1;
}    
i++;  
}    

idade_media = idade_acum_otimo/otimo;  
percentagem_bom =(100.0*bom)/5;   

printf("\n------------------------------\n");

printf("Média das idades para ótimo: %f \n", idade_media);  
printf("Responderam REGULAR: %i \n", regular);
printf("Percentagem de pessoas que responderam BOM: %0.0f\n", percentagem_bom);  

return 0; 


}