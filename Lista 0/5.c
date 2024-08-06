#include <stdio.h>
#include <math.h>

int main() {
    float cateto1, cateto2, hipotenusa;

    // Ler os valores dos catetos
    printf("Digite o valor do primeiro cateto: ");
    scanf("%f", &cateto1);

    printf("Digite o valor do segundo cateto: ");
    scanf("%f", &cateto2);

    // Calcular a hipotenusa usando o teorema de Pitágoras
    hipotenusa = sqrt((cateto1 * cateto1) + (cateto2 * cateto2));

    // Mostrar o resultado
    printf("Hipotenusa: %.2f\n", hipotenusa);

    return 0;
}
