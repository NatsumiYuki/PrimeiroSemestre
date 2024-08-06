#include <stdio.h>

int main() {
    float num1, num2;

    // Ler os dois números
    printf("Digite o primeiro número: ");
    scanf("%f", &num1);

    printf("Digite o segundo número: ");
    scanf("%f", &num2);

    // Verificar e imprimir o maior número
    if (num1 > num2) {
        printf("O maior número é: %.2f\n", num1);
    } else {
        printf("O maior número é: %.2f\n", num2);
    }

    return 0;
}
