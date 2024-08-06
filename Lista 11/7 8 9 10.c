#include <stdio.h>
#include <string.h>

// Estrutura para representar horas, minutos e segundos
typedef struct Horario {
    int horas;
    int minutos;
    int segundos;
} Horario;

// Estrutura para representar dia, mês e ano de uma data
typedef struct Data {
    int dia;
    int mes;
    int ano;
} Data;

// Estrutura que combina informações de data e hora
typedef struct DataHora {
    Data data;
    Horario horario;
} DataHora;

// Estrutura para representar a venda de um produto
typedef struct Venda {
    char nome[50];
    float preco;
    int quantidade;
    DataHora dataHora;  // Utilizando a estrutura DataHora para representar a data e hora da venda
} Venda;

int main() {
    // Exemplo de uso da estrutura Venda
    Venda venda = {
        "Produto A",     // Nome
        29.99,           // Preço
        5,               // Quantidade
        { {25, 6, 2024}, {10, 30, 45} }  // Data e Hora da venda
    };

    printf("Detalhes da venda:\n");
    printf("Nome do produto: %s\n", venda.nome);
    printf("Preço unitário: %.2f\n", venda.preco);
    printf("Quantidade vendida: %d\n", venda.quantidade);
    printf("Data e hora da venda: %02d/%02d/%d %02d:%02d:%02d\n", 
           venda.dataHora.data.dia, venda.dataHora.data.mes, venda.dataHora.data.ano,
           venda.dataHora.horario.horas, venda.dataHora.horario.minutos, venda.dataHora.horario.segundos);

    return 0;
}
