#include <stdio.h>

int main() {
    int num1, num2;
    int *ptr1, *ptr2;

    // Leitura dos números
    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &num1);
    printf("Digite o segundo número inteiro: ");
    scanf("%d", &num2);

    // Obtendo os endereços das variáveis
    ptr1 = &num1;
    ptr2 = &num2;

    // Comparando os endereços e exibindo o maior
    if (ptr1 > ptr2) {
        printf("O endereço de %d é maior do que o endereço de %d\n", num1, num2);
    } else if (ptr2 > ptr1) {
        printf("O endereço de %d é maior do que o endereço de %d\n", num2, num1);
    } else {
        printf("Os endereços são iguais.\n");
    }

    return 0;
}
