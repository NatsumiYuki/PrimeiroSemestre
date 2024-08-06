#include <stdio.h>

int main() {
    float nota;

    // Ler a nota do usuário
    printf("Digite a nota do aluno: ");
    scanf("%f", &nota);

    // Verificar em qual faixa a nota se encaixa e imprimir a mensagem correspondente
    if (nota >= 8 && nota <= 10) {
        printf("Ótimo\n");
    } else if (nota >= 7 && nota < 8) {
        printf("Bom\n");
    } else if (nota >= 5 && nota < 7) {
        printf("Regular\n");
    } else if (nota < 5) {
        printf("Insatisfatório\n");
    } else {
        printf("Nota inválida\n"); // Caso a nota não esteja dentro de nenhuma faixa definida
    }

    return 0;
}
