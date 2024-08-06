#include <stdio.h>

// Função para determinar o maior e o menor valor entre dois inteiros
void maiorMenor(int *a, int *b) {
    if (*a < *b) {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
    // Se *a já for maior ou igual a *b, não é necessário fazer nada adicional
}

int main() {
    int num1, num2;

    // Leitura dos valores
    printf("Digite o primeiro valor inteiro: ");
    scanf("%d", &num1);
    printf("Digite o segundo valor inteiro: ");
    scanf("%d", &num2);

    // Chamando a função para determinar o maior e o menor valor
    maiorMenor(&num1, &num2);

    // Exibindo os valores modificados
    printf("Maior valor: %d\n", num1);
    printf("Menor valor: %d\n", num2);

    return 0;
}
