#include <stdio.h>

int main() {
    int num1, num2, soma, resultado_final;

    // Ler os dois números inteiros
    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &num1);

    printf("Digite o segundo número inteiro: ");
    scanf("%d", &num2);

    // Calcular a soma dos números
    soma = num1 + num2;

    // Verificar condição e calcular o resultado final
    if (soma >= 10) {
        resultado_final = soma + 5;
    } else {
        resultado_final = soma + 7;
    }

    // Imprimir o resultado final
    printf("Resultado final: %d\n", resultado_final);

    return 0;
}
