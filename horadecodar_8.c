#include <stdio.h>

int main() {

    int i, j;
    char letra;

    for (i = 1; i <= 5; i++) {

        letra = 'A';

        for (j = 1; j <= 10; j++) {

            printf("%c \t", letra);
            ++letra;
        }
        
        printf("\n");
    }

    return 0;
}
