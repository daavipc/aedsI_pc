#include <stdio.h>
#include <string.h>

int main(void) {
    char buffer[] = "Hello";
    size_t size = strlen(buffer);
    for(int i = 0; i < size / 2; i++) {
       char tmp = buffer[i];
       buffer[i] = buffer[size - i - 1];
       buffer[size - i - 1] = tmp;
    }
    printf("%s", buffer);
}