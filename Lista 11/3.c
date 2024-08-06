#include <stdio.h>
#include <string.h>

// Função para contar o número de vezes que uma substring ocorre em uma string
int contarOcorrencias(char *str, char *sub) {
    int ocorrencias = 0;
    int tamanho_str = strlen(str);
    int tamanho_sub = strlen(sub);

    // Percorre a string procurando a substring
    for (int i = 0; i <= tamanho_str - tamanho_sub; i++) {
        int j;
        // Verifica se a substring ocorre a partir da posição i da string principal
        for (j = 0; j < tamanho_sub; j++) {
            if (str[i + j] != sub[j]) {
                break;  // Se encontrar um caractere diferente, sai do loop interno
            }
        }
        // Se j atingir tamanho_sub, significa que encontrou a substring
        if (j == tamanho_sub) {
            ocorrencias++;
        }
    }

    return ocorrencias;
}

int main() {
    char string[] = "abracadabra";
    char substring[] = "abra";

    int ocorrencias = contarOcorrencias(string, substring);

    printf("A substring '%s' ocorre %d vezes na string '%s'.\n", substring, ocorrencias, string);

    return 0;
}
