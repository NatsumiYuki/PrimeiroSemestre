#include <stdio.h>
#include <math.h>

int main() {
    float raio, perimetro, area;

    // Ler o raio do círculo
    printf("Digite o raio do círculo: ");
    scanf("%f", &raio);

    // Calcular o perímetro
    perimetro = 2 * 3.14 * raio;

    // Calcular a área
    area = 3.14 * raio * raio;

    // Mostrar os resultados
    printf("Perímetro: %.2f\n", perimetro);
    printf("Área: %.2f\n", area);

    return 0;
}
