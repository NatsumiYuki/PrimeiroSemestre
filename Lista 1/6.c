#include <stdio.h>

int main() {
    float a, b, raiz;

    // Entrada dos coeficientes da equação
    printf("Digite o coeficiente 'a' da equacao ax + b = 0: ");
    scanf("%f", &a);

    printf("Digite o coeficiente 'b' da equacao ax + b = 0: ");
    scanf("%f", &b);

    // Cálculo da raiz da equação de primeiro grau
    raiz = -b / a;

    // Saída da raiz calculada
    printf("A raiz da equacao %.2fx + %.2f = 0 é: %.2f\n", a, b, raiz);

    return 0;
}
