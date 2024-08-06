#include <stdio.h>
typedef struct {
    char nome[100];
    char telefone[20];
    float preco;
} Registro;

void Preencher(Registro *cadastro) {
    for (int i = 0; i < 15; i++) {
        printf("Nome da loja: \n");
        scanf(" %[^\n]s", cadastro[i].nome);
        printf("Telefone: \n");
        scanf(" %[^\n]s", cadastro[i].telefone);
        printf("Preço: \n");
        scanf("%f", &cadastro[i].preco);
    }
}

float Media(Registro *cadastro) {
    float soma = 0;
    for (int i = 0; i < 15; i++) {
        soma += cadastro[i].preco;
    }
    return soma / 15;
}

void Imprimir(Registro *cadastro, float media) {
    printf("Lojas com preços abaixo da média:\n");
    for (int i = 0; i < 15; i++) {
        if (cadastro[i].preco < media) {
            printf("Nome: %s\nTelefone: %s\n", cadastro[i].nome, cadastro[i].telefone);
        }
    }
}

int main(void) {
    Registro c[15];

    Preencher(c);

    float media = Media(c);
    printf("Média dos preços cadastrados: %.2f\n", media);

    Imprimir(c, media);

    return 0;
}