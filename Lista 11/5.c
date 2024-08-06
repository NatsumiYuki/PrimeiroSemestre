#include <stdio.h>
#include <stdlib.h>

// Função para alocar uma matriz com elementos zerados
int **alocarMatrizZerada(int linhas, int colunas) {
    int **matriz = (int **)malloc(linhas * sizeof(int *));
    if (matriz == NULL) {
        printf("Erro: não foi possível alocar memória para as linhas da matriz.\n");
        return NULL;
    }

    for (int i = 0; i < linhas; i++) {
        matriz[i] = (int *)calloc(colunas, sizeof(int));
        if (matriz[i] == NULL) {
            printf("Erro: não foi possível alocar memória para as colunas da matriz.\n");
            // Liberar memória alocada anteriormente
            for (int j = 0; j < i; j++) {
                free(matriz[j]);
            }
            free(matriz);
            return NULL;
        }
    }

    return matriz;
}

// Função para liberar a memória alocada para a matriz
void liberarMatriz(int **matriz, int linhas) {
    for (int i = 0; i < linhas; i++) {
        free(matriz[i]);
    }
    free(matriz);
}

// Função para imprimir uma matriz
void imprimirMatriz(int **matriz, int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int linhas = 3;
    int colunas = 4;

    int **matriz = alocarMatrizZerada(linhas, colunas);

    if (matriz != NULL) {
        printf("Matriz alocada com elementos zerados:\n");
        imprimirMatriz(matriz, linhas, colunas);
        liberarMatriz(matriz, linhas);
    }

    return 0;
}
