#include <stdio.h>

int main() {
    char opcao;
    float salario_atual, novo_salario;

    // Entrada da opção e do salário atual
    printf("Digite a opcao (A, B ou C): ");
    scanf(" %c", &opcao);

    printf("Digite o salario atual do funcionario: ");
    scanf("%f", &salario_atual);

    // Cálculo do novo salário conforme a opção escolhida
    switch (opcao) {
        case 'A':
        case 'a':
            novo_salario = salario_atual * 1.08; // Aumento de 8%
            break;
        case 'B':
        case 'b':
            novo_salario = salario_atual * 1.11; // Aumento de 11%
            break;
        case 'C':
        case 'c':
            if (salario_atual <= 1000) {
                novo_salario = salario_atual + 350; // Aumento fixo de R$ 350
            } else {
                novo_salario = salario_atual + 200; // Aumento fixo de R$ 200
            }
            break;
        default:
            printf("Opcao invalida.\n");
            return 1; // Encerra o programa com erro
    }

    // Saída do novo salário calculado
    printf("Novo salario: R$ %.2f\n", novo_salario);

    return 0;
}
