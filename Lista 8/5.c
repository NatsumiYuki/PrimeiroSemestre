#include <stdio.h>

// Definição da estrutura Cliente
typedef struct {
    char nome[100];
    char endereco[200];
    char telefone[20];
} Cliente;

int main() {
    Cliente cliente1, cliente2;

    // Cadastro do primeiro cliente
    printf("Cadastro do primeiro cliente:\n");
    printf("Nome: ");
    scanf(" %[^\n]", cliente1.nome);
    printf("Endereço: ");
    scanf(" %[^\n]", cliente1.endereco);
    printf("Telefone: ");
    scanf(" %[^\n]", cliente1.telefone);

    // Cadastro do segundo cliente
    printf("\nCadastro do segundo cliente:\n");
    printf("Nome: ");
    scanf(" %[^\n]", cliente2.nome);
    printf("Endereço: ");
    scanf(" %[^\n]", cliente2.endereco);
    printf("Telefone: ");
    scanf(" %[^\n]", cliente2.telefone);

    // Exibindo os dados cadastrados
    printf("\nDados cadastrados:\n");
    printf("Cliente 1:\n");
    printf("Nome: %s\n", cliente1.nome);
    printf("Endereço: %s\n", cliente1.endereco);
    printf("Telefone: %s\n", cliente1.telefone);

    printf("\nCliente 2:\n");
    printf("Nome: %s\n", cliente2.nome);
    printf("Endereço: %s\n", cliente2.endereco);
    printf("Telefone: %s\n", cliente2.telefone);

    return 0;
}
