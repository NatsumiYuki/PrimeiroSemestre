int main() {
    int *ptr, i;
    ptr = (int *) malloc(sizeof(int));
    *ptr = 10;
    for(i = 0; i < 5; i++) {
        *ptr = *ptr + 1;
    }
    printf("\nptr: %d", *ptr);
    free(ptr);
    return 0;
}

int main() {
    int *ptr, i;
    ptr = (int *) malloc(sizeof(int));
    *ptr = 10;
    for(i = 0; i < 5; i++) {
        ptr = ptr + 1;
    }
    printf("\nptr: %p", ptr);
    free(ptr);
    return 0;
}

/*A principal diferença está na forma como os ponteiros são manipulados dentro dos laços. No Código 1, o conteúdo é modificado através de *ptr, enquanto no Código 2, o próprio ponteiro é modificado diretamente com ptr = ptr + 1. Isso impacta diretamente no acesso ao conteúdo e na correta liberação de memória posteriormente.*/