#include <stdio.h>

// Estrutura para representar a venda de um produto
struct Produto {
    char nome[50];
    float preco;
    int quantidade;
    struct DataHora dataHora;
};

int main() {
    // Exemplo de uso da estrutura
    struct Produto venda = {
        "Produto A",     // Nome
        29.99,           // Preço
        5,               // Quantidade
        {
            {25, 6, 2024},  // Data
            {10, 30, 0}     // Horário
        }
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
