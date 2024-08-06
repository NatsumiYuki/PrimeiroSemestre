#include <stdio.h>

// Procedimento para ordenar e exibir três valores em ordem crescente
void ordenarExibir(int a, int b, int c) {
    int temp;

    // Ordenando os valores usando bubble sort para apenas 3 elementos
    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }
    if (b > c) {
        temp = b;
        b = c;
        c = temp;
    }
    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }

    // Exibindo os valores ordenados
    printf("%d %d %d\n", a, b, c);
}

int main() {
    int N, num1, num2, num3;
    int i;

    // Entrada do número de conjuntos N
    printf("Digite o numero de conjuntos (N): ");
    scanf("%d", &N);

    // Processamento para cada conjunto
    for (i = 1; i <= N; i++) {
        // Entrada dos três valores do conjunto
        printf("\nConjunto %d:\n", i);
        printf("Digite os tres valores inteiros: ");
        scanf("%d %d %d", &num1, &num2, &num3);

        // Chamada do procedimento para ordenar e exibir os valores
        ordenarExibir(num1, num2, num3);
    }

    return 0;
}
