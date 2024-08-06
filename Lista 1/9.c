#include <stdio.h>

int main() {
    char simbolo;

    // Ler o símbolo do teclado
    printf("Digite um simbolo: ");
    scanf(" %c", &simbolo);

    // Identificar e mostrar a mensagem correspondente
    switch (simbolo) {
        case '<':
            printf("SINAL DE MENOR\n");
            break;
        case '>':
            printf("SINAL DE MAIOR\n");
            break;
        case '=':
            printf("SINAL DE IGUAL\n");
            break;
        default:
            printf("OUTRO SINAL\n");
            break;
    }

    return 0;
}
