#include <stdio.h>

int main() {
    int L;
    int primeiro = 0, segundo = 1, proximo;

    // Entrada do número limite L
    printf("Digite um numero L para imprimir os elementos da sequencia de Fibonacci menores que L: ");
    scanf("%d", &L);

    // Iniciando a impressão da sequência de Fibonacci
    printf("Elementos da sequencia de Fibonacci menores que %d:\n", L);

    // Imprimindo o primeiro elemento (0) se for menor que L
    if (primeiro < L) {
        printf("%d ", primeiro);
    }

    // Calculando e imprimindo os elementos menores que L
    while (segundo < L) {
        printf("%d ", segundo);
        proximo = primeiro + segundo;
        primeiro = segundo;
        segundo = proximo;
    }

    printf("\n");

    return 0;
}
