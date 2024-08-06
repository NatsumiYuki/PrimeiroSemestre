#include <stdio.h>

int main() {
    int valor = 10;
    int *valorPtr = &valor; // Ponteiro valorPtr aponta para o endereço de valor

    // Verificação das alternativas
    printf("Alternativa a) valor == &valorPtr: %s\n", valor == &valorPtr ? "Verdadeiro" : "Falso");
    printf("Alternativa b) valor == *valorPtr: %s\n", valor == *valorPtr ? "Verdadeiro" : "Falso");
    printf("Alternativa c) valorPtr == &valor: %s\n", valorPtr == &valor ? "Verdadeiro" : "Falso");

    return 0;
}
