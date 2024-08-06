#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int *p = arr; // Ponteiro p aponta para o primeiro elemento do array

    // 1. p++;
    printf("Valor de p após p++: %p\n", p); // Imprime o endereço após o incremento de p
    p++; // Incrementa p para apontar para o próximo elemento do array

    // 2. (*p)++;
    printf("Valor de *p após (*p)++: %d\n", *p); // Imprime o valor de *p antes do incremento
    (*p)++; // Incrementa o valor apontado por p
    printf("Novo valor de *p após (*p)++: %d\n", *p); // Imprime o novo valor de *p

    // 3. *(p+10)
    printf("Valor de *(p+10): %d\n", *(p+2)); // Imprime o valor localizado 10 posições além de p

    return 0;
}
