#include <stdio.h>

int main() {
    int num_apartamentos = 75;
    float valor_diaria_normal, valor_diaria_promocional;
    float ocupacao_normal = 0.5, nova_ocupacao = 0.8;
    float valor_total_promocional, valor_total_normal;
    float diferenca;

    // Ler o valor normal da diária
    printf("Digite o valor normal da diária: ");
    scanf("%f", &valor_diaria_normal);

    // Calcular o valor da diária promocional (com 25% de desconto)
    valor_diaria_promocional = valor_diaria_normal * (1 - 0.25);

    // Calcular o valor total arrecadado com 80% de ocupação e diária promocional
    valor_total_promocional = num_apartamentos * nova_ocupacao * valor_diaria_promocional;

    // Calcular o valor total arrecadado com 50% de ocupação e diária normal
    valor_total_normal = num_apartamentos * ocupacao_normal * valor_diaria_normal;

    // Calcular a diferença entre os dois valores arrecadados
    diferenca = valor_total_promocional - valor_total_normal;

    // Imprimir os resultados
    printf("\nResultados:\n");
    printf("a) Valor da diária promocional: %.2f\n", valor_diaria_promocional);
    printf("b) Valor total arrecadado com 80%% de ocupação e diária promocional: %.2f\n", valor_total_promocional);
    printf("c) Valor total arrecadado com 50%% de ocupação e diária normal: %.2f\n", valor_total_normal);
    printf("d) Diferença entre os dois valores arrecadados: %.2f\n", diferenca);

    return 0;
}
