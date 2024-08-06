#include <stdio.h>
#include <stdlib.h>

// Função para multiplicar um vetor por uma matriz
float *multiplicarVetorPorMatriz(float vetor[], float **matriz, int linhas, int colunas) {
    float *resultado = (float *)malloc(linhas * sizeof(float));
    if (resultado == NULL) {
        printf("Erro: não foi possível alocar memória para o vetor resultado.\n");
        return NULL;
    }

    for (int i = 0; i < linhas; i++) {
        resultado[i] = 0.0;
        for (int j = 0; j < colunas; j++) {
            resultado[i] += vetor[j] * matriz[i][j];
        }
    }

    return resultado;
}

// Função para liberar a memória alocada para a matriz
void liberarMatriz(float **matriz, int linhas) {
    for (int i = 0; i < linhas; i++) {
        free(matriz[i]);
    }
    free(matriz);
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
    float vetor[] = {1.0, 2.0, 3.0};
    float *matriz[3];
    for (int i = 0; i < 3; i++) {
        matriz[i] = (float *)malloc(3 * sizeof(float));
        for (int j = 0; j < 3; j++) {
            matriz[i][j] = i + j + 1.0;
        }
    }

    float *resultado = multiplicarVetorPorMatriz(vetor, matriz, 3, 3);

    if (resultado != NULL) {
        printf("Resultado da multiplicação do vetor pela matriz:\n");
        imprimirVetor(resultado, 3);
        free(resultado);  // Liberar memória alocada dinamicamente para resultado
    }

    // Liberar memória alocada para matriz
    liberarMatriz(matriz, 3);

    return 0;
}
