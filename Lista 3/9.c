#include <stdio.h>

// Função para calcular a média das notas dos alunos aprovados
double calcularMediaAprovados() {
    double nota, soma = 0.0;
    int count = 0;

    printf("Digite as notas dos alunos (digite um valor negativo para encerrar):\n");

    // Loop para ler as notas dos alunos
    while (1) {
        printf("Nota do aluno %d: ", count + 1);
        scanf("%lf", &nota);

        // Encerra a entrada se a nota for negativa
        if (nota < 0) {
            break;
        }

        // Soma apenas as notas dos alunos aprovados (nota >= 6)
        if (nota >= 6) {
            soma += nota;
            count++;
        }
    }

    // Calcula a média das notas dos alunos aprovados
    if (count > 0) {
        return soma / count;
    } else {
        return 0.0; // Retorna 0 se nenhum aluno foi aprovado
    }
}

int main() {
    int numAlunos;
    double mediaAprovados;

    // Entrada do número de alunos
    printf("Digite o numero de alunos: ");
    scanf("%d", &numAlunos);

    // Chamada da função para calcular a média das notas dos alunos aprovados
    mediaAprovados = calcularMediaAprovados();

    // Exibindo a média das notas dos alunos aprovados
    printf("Media das notas dos alunos aprovados: %.2f\n", mediaAprovados);

    return 0;
}
