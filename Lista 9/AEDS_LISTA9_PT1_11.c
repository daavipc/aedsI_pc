#include <stdio.h>

int main()
{
    int palavra[10];
    int i = 0;
    int j;
    int quan[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	char frase[200];
	printf("Frase: ");
	fgets(frase, sizeof(frase),stdin);
	int init_size = strlen(frase);
	char delim[] = " ";
	char *ptr = strtok(frase, delim);
	while(ptr != NULL)
	{
	    j = i;
		printf("%s\n", ptr);
		if(i != 0){
		    do{
		        if(*ptr == palavra[j]){
		          quan[???]++; 
		        }
		        j--;
		    }while(j > 0);
		}
		else{
		    quan[i]++;
		}
		ptr = strtok(NULL, delim);
	}
	i = 0;
	for(i=0; i<10; i++){
	    printf("%d\n", quan[i]);
	}
	return 0;
}