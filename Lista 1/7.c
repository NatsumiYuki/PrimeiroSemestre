#include <stdio.h>

int main() {
    int velocidade_maxima, velocidade_motorista;
    int diferenca_velocidade;
    int multa;

    printf("Digite a velocidade máxima permitida (em km/h): ");
    scanf("%d", &velocidade_maxima);

    printf("Digite a velocidade do motorista (em km/h): ");
    scanf("%d", &velocidade_motorista);

    if (velocidade_motorista <= velocidade_maxima) {
        printf("Motorista respeitou a lei\n");
    } else {
        diferenca_velocidade = velocidade_motorista - velocidade_maxima;

        if (diferenca_velocidade <= 10) {
            multa = 50;
        } else if (diferenca_velocidade <= 30) {
            multa = 100;
        } else {
            multa = 200;
        }

        printf("Multa a ser cobrada: R$ %d\n", multa);
    }

    return 0;
}

