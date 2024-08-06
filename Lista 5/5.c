#include <stdio.h>

int main() {
    int inteiro, *ptrInteiro;
    float real, *ptrReal;
    char caractere, *ptrCaractere;

    // Inicialização das variáveis
    inteiro = 10;
    real = 3.14;
    caractere = 'A';

    // Atribuição dos ponteiros
    ptrInteiro = &inteiro;
    ptrReal = &real;
    ptrCaractere = &caractere;

    // Exibindo os endereços e conteúdos iniciais
    printf("Endereço de inteiro: %p, Conteúdo de inteiro: %d\n", (void *)&inteiro, inteiro);
    printf("Endereço de real: %p, Conteúdo de real: %.2f\n", (void *)&real, real);
    printf("Endereço de caractere: %p, Conteúdo de caractere: %c\n", (void *)&caractere, caractere);

    // Solicitando novos dados para as variáveis através dos ponteiros
    printf("\nDigite um novo valor para inteiro: ");
    scanf("%d", ptrInteiro);

    printf("Digite um novo valor para real: ");
    scanf("%f", ptrReal);

    printf("Digite um novo valor para caractere: ");
    scanf(" %c", ptrCaractere);

    // Exibindo os endereços e conteúdos após a alteração
    printf("\nEndereço de inteiro: %p, Conteúdo de inteiro: %d\n", (void *)&inteiro, inteiro);
    printf("Endereço de real: %p, Conteúdo de real: %.2f\n", (void *)&real, real);
    printf("Endereço de caractere: %p, Conteúdo de caractere: %c\n", (void *)&caractere, caractere);

    return 0;
}
