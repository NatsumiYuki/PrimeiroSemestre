#include <stdio.h>
#include <string.h>

#define MAX_LIVROS 1500

typedef struct {
    int codigoCatalogacao;
    char doacao; // 'S' ou 'N'
    char nomeObra[100];
    char nomeAutor[50];
    char editora[50];
    char area[20];
} Livro;
void cadastrarLivro(Livro livros[], int *contador, char area[]) {
    Livro livro;
    printf("Digite o código de catalogação (-1 para sair): ");
    scanf("%d", &livro.codigoCatalogacao);

    if (livro.codigoCatalogacao == -1)
        return;

    printf("É uma doação? (S/N): ");
    scanf(" %c", &livro.doacao);

    printf("Digite o nome da obra: ");
    scanf(" %[^\n]", livro.nomeObra);

    printf("Digite o nome do autor: ");
    scanf(" %[^\n]", livro.nomeAutor);

    printf("Digite a editora: ");
    scanf(" %[^\n]", livro.editora);

    strcpy(livro.area, area);

    livros[*contador] = livro;
    (*contador)++;
    printf("Livro cadastrado com sucesso!\n");
}
void consultarLivro(Livro livros[], int contador, int codigo, char area[]) {
    int encontrado = 0;
    for (int i = 0; i < contador; i++) {
        if (livros[i].codigoCatalogacao == codigo && strcmp(livros[i].area, area) == 0) {
            printf("\nInformações do livro encontrado:\n");
            printf("Código de catalogação: %d\n", livros[i].codigoCatalogacao);
            printf("Doação: %c\n", livros[i].doacao);
            printf("Nome da obra: %s\n", livros[i].nomeObra);
            printf("Nome do autor: %s\n", livros[i].nomeAutor);
            printf("Editora: %s\n", livros[i].editora);
            printf("Área: %s\n", livros[i].area);
            encontrado = 1;
            break;
        }
    }
    if (!encontrado) {
        printf("Livro não encontrado na área especificada.\n");
    }
}
int main() {
    Livro livros[MAX_LIVROS];
    int contadorExatas = 0, contadorHumanas = 0, contadorBiologicas = 0;
    int codigo;
    char area[20];

    while (1) {
        printf("\nDigite a área do livro (Exatas/Humanas/Biológicas) ou -1 para sair: ");
        scanf(" %[^\n]", area);

        if (strcmp(area, "-1") == 0)
            break;

        if (strcmp(area, "Exatas") == 0) {
            cadastrarLivro(livros, &contadorExatas, area);
        } else if (strcmp(area, "Humanas") == 0) {
            cadastrarLivro(livros, &contadorHumanas, area);
        } else if (strcmp(area, "Biológicas") == 0) {
            cadastrarLivro(livros, &contadorBiologicas, area);
        } else {
            printf("Área inválida. Tente novamente.\n");
        }
    }

    printf("\nDigite o código de catalogação para consultar (-1 para sair): ");
    scanf("%d", &codigo);

    while (codigo != -1) {
        printf("Digite a área do livro para consulta (Exatas/Humanas/Biológicas): ");
        scanf(" %[^\n]", area);

        if (strcmp(area, "Exatas") == 0) {
            consultarLivro(livros, contadorExatas, codigo, area);
        } else if (strcmp(area, "Humanas") == 0) {
            consultarLivro(livros, contadorHumanas, codigo, area);
        } else if (strcmp(area, "Biológicas") == 0) {
            consultarLivro(livros, contadorBiologicas, codigo, area);
        } else {
            printf("Área inválida. Tente novamente.\n");
        }

        printf("\nDigite o código de catalogação para consultar (-1 para sair): ");
        scanf("%d", &codigo);
    }

    return 0;
}