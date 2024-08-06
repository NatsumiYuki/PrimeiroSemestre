#include <stdio.h>
#include <math.h>

int main() {
    float base, altura, perimetro, area, diagonal;

    // Ler a base do retângulo
    printf("Digite a base do retângulo: ");
    scanf("%f", &base);

    // Ler a altura do retângulo
    printf("Digite a altura do retângulo: ");
    scanf("%f", &altura);

    // Calcular o perímetro
    perimetro = 2 * (base + altura);

    // Calcular a área
    area = base * altura;

    // Calcular a diagonal
    diagonal = sqrt((base * base) + (altura * altura));

    // Mostrar os resultados
    printf("Perímetro: %.2f\n", perimetro);
    printf("Área: %.2f\n", area);
    printf("Diagonal: %.2f\n", diagonal);

    return 0;
}
