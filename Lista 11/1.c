#include <stdio.h>

// Função para trocar dois elementos de um vetor
void trocar(float *a, float *b) {
    float temp = *a;
    *a = *b;
    *b = temp;
}

// Função para ordenar vetor em ordem decrescente usando Bubble Sort
void ordenarDecrescente(float vetor[], int tamanho) {
    int i, j;
    for (i = 0; i < tamanho-1; i++) {
        for (j = 0; j < tamanho-i-1; j++) {
            if (vetor[j] < vetor[j+1]) {
                trocar(&vetor[j], &vetor[j+1]);
            }
        }
    }
}

// Função para imprimir vetor
void imprimirVetor(float vetor[], int tamanho) {
    printf("[");
    for (int i = 0; i < tamanho; i++) {
        printf("%.2f", vetor[i]);
        if (i < tamanho - 1)
            printf(", ");
    }
    printf("]\n");
}

int main() {
    float vetor[] = {3.14, 2.71, 1.618, 0.707, 5.0};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);

    printf("Vetor original: ");
    imprimirVetor(vetor, tamanho);

    ordenarDecrescente(vetor, tamanho);

    printf("Vetor ordenado em ordem decrescente: ");
    imprimirVetor(vetor, tamanho);

    return 0;
}