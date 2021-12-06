#include <stdio.h>
#include <stdlib.h>

int main(){
    
char cadeia1 [] = "abcde", cadeia2[] = "abcde", i,j, aux;

for(i = 0; i < strlen(cadeia1); i++){
for(j = i+1; j< strlen(cadeia2; j++)){

if(stricmp(cadeia1[i],cadeia1[j])>0)){
strcpy(aux,cadeia1[i]);
strcpy(cadeia1[i], cadeia1[j]);
strcpy(cadeia1[j],aux);
}

if(stricmp(cadeia2[i],cadeia2[j])>0)){
strcpy(aux,cadeia2[i]);
strcpy(cadeia2[i], cadeia2[j]);
strcpy(cadeia2[j],aux);
}


}
}

if((stricmp(cadeia1,cadeia2)) == 0){
printf("\n\n sem ");
}else{
printf("\n\n não são ");

}


return 0;
}