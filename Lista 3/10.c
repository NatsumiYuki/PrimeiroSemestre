#include <stdio.h>

// Função para determinar a categoria do nadador
char determinarCategoria(int idade) {
    if (idade >= 5 && idade <= 7) {
        return 'F';
    } else if (idade >= 8 && idade <= 10) {
        return 'E';
    } else if (idade >= 11 && idade <= 13) {
        return 'D';
    } else if (idade >= 14 && idade <= 15) {
        return 'C';
    } else if (idade >= 16 && idade <= 17) {
        return 'B';
    } else if (idade > 18) {
        return 'A';
    } else {
        return ' ';
    }
}

int main() {
    int idade;
    char categoria;

    // Entrada da idade do nadador
    printf("Digite a idade do nadador: ");
    scanf("%d", &idade);

    // Chamada da função para determinar a categoria do nadador
    categoria = determinarCategoria(idade);

    // Exibindo a categoria do nadador
    switch (categoria) {
        case 'F':
            printf("Categoria: 5 a 7 anos (F)\n");
            break;
        case 'E':
            printf("Categoria: 8 a 10 anos (E)\n");
            break;
        case 'D':
            printf("Categoria: 11 a 13 anos (D)\n");
            break;
        case 'C':
            printf("Categoria: 14 a 15 anos (C)\n");
            break;
        case 'B':
            printf("Categoria: 16 a 17 anos (B)\n");
            break;
        case 'A':
            printf("Categoria: Acima de 18 anos (A)\n");
            break;
        default:
            printf("Categoria nao definida\n");
    }

    return 0;
}
