#include <stdio.h>

// Função para ordenar três valores inteiros e verificar se são iguais
int ordenarVerificar(int *a, int *b, int *c) {
    int temp;

    // Ordena os valores usando bubble sort (poderia ser usado outro algoritmo de ordenação)
    if (*a > *b) {
        temp = *a;
        *a = *b;
        *b = temp;
    }
    if (*b > *c) {
        temp = *b;
        *b = *c;
        *c = temp;
    }
    if (*a > *b) {
        temp = *a;
        *a = *b;
        *b = temp;
    }

    // Verifica se são iguais
    if (*a == *b && *b == *c) {
        return 1; // Todos são iguais
    } else {
        return 0; // Pelo menos um é diferente
    }
}

int main() {
    int num1, num2, num3;

    // Leitura dos valores
    printf("Digite o primeiro valor inteiro: ");
    scanf("%d", &num1);
    printf("Digite o segundo valor inteiro: ");
    scanf("%d", &num2);
    printf("Digite o terceiro valor inteiro: ");
    scanf("%d", &num3);

    // Chamando a função para ordenar e verificar
    int saoIguais = ordenarVerificar(&num1, &num2, &num3);

    // Exibindo os valores ordenados
    printf("\nValores ordenados: %d, %d, %d\n", num1, num2, num3);

    // Exibindo mensagem de igualdade ou diferença
    if (saoIguais) {
        printf("Os valores são iguais.\n");
    } else {
        printf("Os valores são diferentes.\n");
    }

    return 0;
}
