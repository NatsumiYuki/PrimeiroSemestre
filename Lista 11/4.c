#include <stdio.h>
#include <stdlib.h>

// Função para calcular o produto escalar de dois vetores
float *produtoEscalar(float vetor1[], float vetor2[], int tamanho) {
    float *resultado = (float *)malloc(tamanho * sizeof(float));

    if (resultado == NULL) {
        printf("Erro: não foi possível alocar memória.\n");
        return NULL;
    }

    for (int i = 0; i < tamanho; i++) {
        resultado[i] = vetor1[i] * vetor2[i];
    }

    return resultado;
}

// Função para imprimir um vetor
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
    float vetor1[] = {1.0, 2.0, 3.0};
    float vetor2[] = {4.0, 5.0, 6.0};
    int tamanho = sizeof(vetor1) / sizeof(vetor1[0]);

    float *resultado = produtoEscalar(vetor1, vetor2, tamanho);

    if (resultado != NULL) {
        printf("Produto escalar dos vetores:\n");
        imprimirVetor(resultado, tamanho);
        free(resultado);  // Liberar memória alocada dinamicamente
    }

    return 0;
}
