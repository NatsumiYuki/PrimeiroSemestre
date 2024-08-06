#include <stdio.h>

int main() {
    int L;
    int i, primeiro = 0, segundo = 1, proximo;

    // Entrada do número de elementos da sequência a serem impressos
    printf("Digite o numero de elementos da sequencia de Fibonacci a serem impressos: ");
    scanf("%d", &L);

    // Verificação mínima para imprimir pelo menos o primeiro elemento
    if (L >= 1) {
        printf("Sequencia de Fibonacci com os primeiros %d elementos:\n", L);
        printf("%d ", primeiro);
    }

    // Calculando e imprimindo os elementos da sequência de Fibonacci
    for (i = 1; i < L; i++) {
        printf("%d ", segundo);
        proximo = primeiro + segundo;
        primeiro = segundo;
        segundo = proximo;
    }

    printf("\n");

    return 0;
}
