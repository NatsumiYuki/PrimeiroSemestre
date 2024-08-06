#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr, i;
    ptr = (int *) malloc(sizeof(int)); // Aloca memória para um inteiro
    *ptr = 10; // Atribui o valor 10 para o endereço apontado por ptr

    // Loop para incrementar *ptr cinco vezes
    for (i = 0; i < 5; i++) {
        *ptr = *ptr + 1;
    }

    printf("\nptr: %d", *ptr); // Imprime o valor armazenado em *ptr
    free(ptr); // Libera a memória alocada por malloc
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr, i;
    ptr = (int *) malloc(sizeof(int)); // Aloca memória para um inteiro
    *ptr = 10; // Atribui o valor 10 para o endereço apontado por ptr

    // Loop para avançar ptr cinco vezes
    for (i = 0; i < 5; i++) {
        ptr = ptr + 1;
    }

    printf("\nptr: %p", ptr); // Imprime o valor do ponteiro ptr
    free(ptr); // Libera a memória alocada por malloc (com problema)
    return 0;
}
