#include <stdio.h>

int main() {
    float A, B, temp;

    // Ler os valores das variáveis A e B
    printf("Digite o valor de A: ");
    scanf("%f", &A);

    printf("Digite o valor de B: ");
    scanf("%f", &B);

    // Mostrar os valores antes da troca
    printf("Antes da troca: A = %.2f, B = %.2f\n", A, B);

    // Trocar os valores usando uma variável temporária
    temp = A;
    A = B;
    B = temp;

    // Mostrar os valores depois da troca
    printf("Depois da troca: A = %.2f, B = %.2f\n", A, B);

    return 0;
}