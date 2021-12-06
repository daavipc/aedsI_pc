#include <stdio.h>
#include <stdlib.h>
int codp[3],prod[3],codc[3],i,j,qs,cod,opcao,opc;

int menu (void){
printf("1- Cadastro de produtos");
printf("\n2- Pedido do cliente");                
printf("\n3- Estoque");
printf("\n4- Sair");      
scanf("%d",&opc);
system("cls");
return(opc);
}

int cad(){    
for(i=1;i<=3;i++){    
printf("\n <*> CADASTRO DE PROODUTOS <*>");                      
printf("\n digite o codigo do produto");
scanf("%d",&codp[i]);
printf("digite a quntidade do produto");
scanf("%d",&prod[i]);
system("cls");
}      
}

int ped(){   

for(i=1;i<=1;i++){
printf("\n Digite o codigo do cliente");
scanf("%d",&codc[i]);
printf("\nDigite o codigo do produto pedido");
scanf("%d",&cod);
}  
for(i=1;i<=3;i++){          
if(cod==codp[i]){
printf("\t Código cadastrado!");
printf("\n Digite a quantidade");
scanf("%d",&qs);

if (qs<=prod[i]){
prod[i]=prod[i]-qs;
printf("Pedido atendido");              
}
}              
else{
printf("\n Não temos estoque suficiente desta mercadoria");
}
system("cls");                  

}      
}  
int estoque (){
printf("Digite o código e a quantidade");  
for(i=1;i<=3;i++){                            
printf("\n %d-  %d",codp[i],prod[i]);      
}    
}

int main(void){    
opcao=menu();
while(opcao!=4){
if (opc==1){
cad();
opcao=menu();
}
else    
if (opc==2){
ped();
opcao=menu();
}
else          
if (opc==3){                      
estoque();
opcao=menu();              
}
if (opc==4){
printf("programa encerrado");
}
}              
return(0);  
}