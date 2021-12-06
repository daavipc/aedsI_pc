int main()
{
    char frase[200];
    int tam;
    int i = 0;
    int j;
    int letras = 0;//quantas letras diferentes existem.
    //Input.
    printf("Frase: ");
    fgets(frase, sizeof(frase),stdin);
    tam = strlen(frase);
    //Cálculo.
    for(i=0; i<tam; i++){
        j = i;
        if(frase[i] != ' ' || frase[i] != '\n' || frase[i] != '0' || frase[i] != '1' || frase[i] != '2'
        || frase[i] != '3' || frase[i] != '4' || frase[i] != '5' || frase[i] != '6' || frase[i] != '7' || frase[i] != '8'
        || frase[i] != '9'){
            if(i != 0){
                do{
                    if(frase[i] != frase[j]){
                        letras++;
                    }
                    j--;
                }while(0 < j);
            }
            else{
                letras++;
            }
        }
    }
    //Output.
    printf("Existem %d letras diferentes na frase.", letras);
    return 0;
}