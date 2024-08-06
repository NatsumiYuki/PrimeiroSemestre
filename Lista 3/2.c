#include <stdio.h>

// Procedimento para calcular média de salário da população
void calcularMediaSalario() {
    float salario, somaSalarios = 0.0;
    int numFilhos, contador = 0;

    printf("Entre com os dados dos habitantes.\n");
    printf("Para encerrar, digite um valor negativo para o salário.\n\n");

    // Loop para ler os dados de várias pessoas
    while (1) {
        // Entrada do salário
        printf("Salario: ");
        scanf("%f", &salario);

        // Condição de parada do loop
        if (salario < 0) {
            break;
        }

        // Entrada do número de filhos
        printf("Numero de filhos: ");
        scanf("%d", &numFilhos);

        // Somando os salários para calcular a média posteriormente
        somaSalarios += salario;
        contador++;
    }

    // Verificação para evitar divisão por zero
    if (contador > 0) {
        // Calculando e exibindo a média de salários da população
        float mediaSalarios = somaSalarios / contador;
        printf("\nMedia de salario da populacao: %.2f\n", mediaSalarios);
    } else {
        printf("\nNenhum dado foi inserido.\n");
    }
}

int main() {
    // Chamando o procedimento para calcular a média de salário da população
    calcularMediaSalario();

    return 0;
}
