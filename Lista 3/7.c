#include <stdio.h>
#include <stdbool.h> // Biblioteca para usar o tipo booleano

// Função para verificar se um número é positivo
bool verificarPositivo(int numero) {
    if (numero > 0) {
        return true; // Verdadeiro (positivo)
    } else {
        return false; // Falso (não positivo)
    }
}

int main() {
    int N, numero;

    // Entrada do número de valores a serem verificados
    printf("Digite a quantidade de numeros a serem verificados: ");
    scanf("%d", &N);

    // Verificação para cada número
    for (int i = 1; i <= N; i++) {
        printf("Digite o %do numero: ", i);
        scanf("%d", &numero);

        // Chamada da função para verificar se o número é positivo
        if (verificarPositivo(numero)) {
            printf("%d eh positivo.\n", numero);
        } else {
            printf("%d nao eh positivo.\n", numero);
        }
    }

    return 0;
}
