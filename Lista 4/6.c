#include <stdio.h>

int main() {
    int array[] = {1, 2, 3, 4, 5};
    int *p = array; // p aponta para o primeiro elemento do array

    // Exemplo das expressões
    p++;        // p é incrementado para apontar para o próximo elemento
    (*p)++;     // Incrementa o valor apontado por p (agora é 3)
    *(p++);     // Tenta desreferenciar o novo valor de p (agora é 3)

    // Exemplo da expressão *(p+10)
    int *q = array;
    q = q + 10; // Avança q para 10 elementos à frente de array
    printf("Valor em *(p+10): %d\n", *q); // Imprime o valor no local de memória avançado

    return 0;
}
