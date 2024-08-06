#include <stdio.h>

int main() {
    int numerador, denominador;
    float resultado;

    // Ler o numerador da fração
    printf("Digite o numerador da fração: ");
    scanf("%d", &numerador);

    // Ler o denominador da fração (garantindo que não seja zero)
    do {
        printf("Digite o denominador da fração (não pode ser zero): ");
        scanf("%d", &denominador);
        if (denominador == 0) {
            printf("Denominador não pode ser zero. Digite novamente.\n");
        }
    } while (denominador == 0);

    // Calcular o resultado da fração (numerador / denominador)
    resultado = (float) numerador / denominador;

    // Mostrar o resultado como número decimal
    printf("O resultado da fração %d/%d em decimal é: %.2f\n", numerador, denominador, resultado);

    return 0;
}
