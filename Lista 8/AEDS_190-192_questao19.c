#include <stdio.h>
int main() {
    int a[10], b[10], c[10], i;
    for (i = 0; i<10; i++) {
        printf("Insira o %d elemento do vetor 1: ", (i+1));
        scanf("%d", &a[i]);
    }
    for (i = 0; i<10; i++) {
        printf("Insira o %do elemento do vetor 2: ", (i+1));
        scanf("%d", &b[i]);
    }
    for (i = 0; i<10; i++) {
        c[i] = a[i] * b[i];
        printf("%do elemento do vetor resultante: %d", (i+1), c[i]);
    }
    return 0;
}