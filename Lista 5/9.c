#include <stdio.h>
#define PI 3.14159

// Procedimento para calcular comprimento e área da circunferência
void calcCircunferencia(float R, float *compr, float *area) {
    // Calcula o comprimento da circunferência
    *compr = 2 * PI * R;

    // Calcula a área da circunferência
    *area = PI * R * R;
}

int main() {
    float raio, comprimento, area;

    // Entrada do raio da circunferência
    printf("Digite o raio da circunferencia: ");
    scanf("%f", &raio);

    // Chama o procedimento para calcular comprimento e área
    calcCircunferencia(raio, &comprimento, &area);

    // Saída dos resultados
    printf("Comprimento da circunferencia: %.2f\n", comprimento);
    printf("Area da circunferencia: %.2f\n", area);

    return 0;
}
