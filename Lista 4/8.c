#include <stdio.h>

int main() {
    int x, *p, **q;

    p = &x;     // p aponta para x
    q = &p;     // q aponta para p

    x = 10;     // atribui 10 para x

    // Para imprimir o valor 10, devemos desreferenciar q duas vezes (q -> p -> x)
    printf("\n%d\n", **q);

    return 0;
}
