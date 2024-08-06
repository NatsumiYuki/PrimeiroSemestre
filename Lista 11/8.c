#include <stdio.h>

// Estrutura para representar dia, mês e ano de uma data
struct Data {
    int dia;
    int mes;
    int ano;
};

int main() {
    // Exemplo de uso da estrutura
    struct Data hoje = {25, 6, 2024};

    printf("Data de hoje: %02d/%02d/%d\n", hoje.dia, hoje.mes, hoje.ano);

    return 0;
}
