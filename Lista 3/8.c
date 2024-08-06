#include <stdio.h>

// Função para calcular S
double calcularS(int N) {
    double S = 0.0;

    for (int n = 1; n <= N; n++) {
        S += (n * n + 1.0) / (n + 3.0);
    }

    return S;
}

int main() {
    int N;
    double resultado;

    // Entrada do valor de N
    printf("Digite o valor de N para calcular S: ");
    scanf("%d", &N);

    // Chamada da função para calcular S e obter o resultado
    resultado = calcularS(N);

    // Exibindo o resultado da série S
    printf("Resultado da serie S para N = %d: %.6f\n", N, resultado);

    return 0;
}
