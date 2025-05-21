#include <stdio.h>

int main() {

    int valor;

    printf("Digite um valor menor que 50: ");
    scanf(" %d", &valor);

    do {
        if (valor % 2 == 0) {
            printf("%d\n", valor);
        }
        valor++;
    } while (valor <= 50);

    if (valor > 50) {
        printf("ERRO: O valor digitado foi maior que 50.\n");
    }

    printf("Fim do programa.\n");
    return 0;
}