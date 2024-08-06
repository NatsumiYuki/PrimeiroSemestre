#include <stdio.h>

// Função para calcular S
double calcularS(int N) {
    double S = 1.0; // Começamos com o primeiro termo da série, 1

    // Loop para calcular os termos da série de 1/1! até 1/N!
    for (int i = 1; i <= N; i++) {
        int factorial = 1;
        
        // Calcular o fatorial de i
        for (int j = 1; j <= i; j++) {
            factorial *= j;
        }

        // Adicionar o termo 1/i! a S
        S += 1.0 / factorial;
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
