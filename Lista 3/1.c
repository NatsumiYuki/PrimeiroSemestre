#include <stdio.h>

// Procedimento para calcular média aritmética ou ponderada
void calcularMedia(float nota1, float nota2, float nota3, char tipoMedia) {
    float media;

    if (tipoMedia == 'A') {
        // Média aritmética
        media = (nota1 + nota2 + nota3) / 3.0;
        printf("Media aritmetica: %.2f\n", media);
    } else if (tipoMedia == 'P') {
        // Média ponderada (pesos: 5, 3 e 2)
        media = (5 * nota1 + 3 * nota2 + 2 * nota3) / 10.0;
        printf("Media ponderada: %.2f\n", media);
    } else {
        printf("Tipo de media invalido!\n");
    }
}

int main() {
    int N, i;
    float nota1, nota2, nota3;
    char tipoMedia;

    // Entrada do número de alunos
    printf("Digite o numero de alunos (N): ");
    scanf("%d", &N);

    // Processamento para cada aluno
    for (i = 1; i <= N; i++) {
        // Entrada das notas e tipo de media
        printf("\nAluno %d\n", i);
        printf("Digite as tres notas do aluno: ");
        scanf("%f %f %f", &nota1, &nota2, &nota3);
        printf("Digite o tipo de media (A para aritmetica, P para ponderada): ");
        scanf(" %c", &tipoMedia);

        // Chamada do procedimento para calcular e imprimir a media
        calcularMedia(nota1, nota2, nota3, tipoMedia);
    }

    return 0;
}
