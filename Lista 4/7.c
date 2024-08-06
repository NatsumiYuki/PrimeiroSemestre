#include <stdio.h>

int main() {
    int valor = 10; // Variável inteira valor
    int *valorPtr;  // Ponteiro para inteiro

    valorPtr = &valor; // Atribui o endereço de valor ao ponteiro valorPtr

    // Verificando as alternativas dadas
    printf("a) valor == &valorPtr: %s\n", valor == &valorPtr ? "Verdadeiro" : "Falso");
    printf("b) valor == *valorPtr: %s\n", valor == *valorPtr ? "Verdadeiro" : "Falso");
    printf("c) valorPtr == &valor: %s\n", valorPtr == &valor ? "Verdadeiro" : "Falso");
    // printf("d) valorPtr == *valo: %s\n", valorPtr == *valo ? "Verdadeiro" : "Falso");

    return 0;
}
