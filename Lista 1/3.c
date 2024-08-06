#include <stdio.h>
#include <stdbool.h> // Para usar o tipo booleano

int main() {
    int ano_nascimento, idade, ano_atual;
    char fez_aniversario;

    // Ler o ano de nascimento
    printf("Digite o ano de nascimento: ");
    scanf("%d", &ano_nascimento);

    // Ler o ano atual
    printf("Digite o ano atual: ");
    scanf("%d", &ano_atual);

    // Verificar se a pessoa já fez aniversário no ano atual
    printf("A pessoa já fez aniversário neste ano? Digite S (sim) ou N (não): ");
    scanf(" %c", &fez_aniversario);

    // Calcular a idade da pessoa
    if (fez_aniversario == 'S' || fez_aniversario == 's') {
        idade = ano_atual - ano_nascimento;
    } else {
        idade = ano_atual - ano_nascimento - 1;
    }

    // Imprimir a idade da pessoa
    printf("Idade: %d anos\n", idade);

    // Verificar se a pessoa tem idade para obter Carteira de Habilitação (18 anos ou mais)
    if (idade >= 18) {
        printf("Você tem idade para obter a Carteira de Habilitação.\n");
    } else {
        printf("Você ainda não tem idade suficiente para obter a Carteira de Habilitação.\n");
    }

    return 0;
}
