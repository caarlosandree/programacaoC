#include <stdio.h>

// Função recursiva para imprimir números de n até 1

void recursiveloop (int n) {
    if (n >= 0) {
        printf("%d ", n); // Imprime o valor atual de n
        recursiveloop(n - 1); // Chama a si mesma com n - 1
    }
}

int main() {

    int numero;

    printf("Digite um número para iniciar a contagem regressiva: ");
    scanf("%d", &numero);

    printf("Contagem regressiva: ");
    recursiveloop(numero);

    return 0;
}