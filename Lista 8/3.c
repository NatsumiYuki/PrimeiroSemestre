#include <stdio.h>

#define MAX_CLIENTES 500
#define CUSTO_PRIMEIRAS_20_HORAS 35.00
#define CUSTO_EXCEDENTE_POR_HORA 2.50
#define CUSTO_PAGINA_ADICIONAL 40.00
#define LIMITE_HORAS_GRATIS 20

// Definição da estrutura para armazenar os dados do cliente
typedef struct {
    int codigo;
    char email[100];
    int horas_acesso;
    char pagina;
} Cliente;

// Função para calcular o valor a pagar por cada cliente
float calcularValorPagar(Cliente cliente) {
    float valorPagar = 0.0;

    // Calcula o valor base pelas primeiras 20 horas
    if (cliente.horas_acesso <= LIMITE_HORAS_GRATIS) {
        valorPagar = CUSTO_PRIMEIRAS_20_HORAS;
    } else {
        valorPagar = CUSTO_PRIMEIRAS_20_HORAS + (cliente.horas_acesso - LIMITE_HORAS_GRATIS) * CUSTO_EXCEDENTE_POR_HORA;
    }

    // Adiciona o custo da página, se houver
    if (cliente.pagina == 'S' || cliente.pagina == 's') {
        valorPagar += CUSTO_PAGINA_ADICIONAL;
    }

    return valorPagar;
}

int main() {
    Cliente clientes[MAX_CLIENTES];
    int num_clientes;
    
    // Leitura do número de clientes
    printf("Digite o número de clientes (até %d): ", MAX_CLIENTES);
    scanf("%d", &num_clientes);

    // Leitura dos dados dos clientes
    for (int i = 0; i < num_clientes; i++) {
        printf("\nCliente %d:\n", i + 1);
        printf("Código: ");
        scanf("%d", &clientes[i].codigo);
        printf("E-mail: ");
        scanf("%s", clientes[i].email);
        printf("Horas de acesso: ");
        scanf("%d", &clientes[i].horas_acesso);
        printf("Tem página? (S/N): ");
        scanf(" %c", &clientes[i].pagina);
    }

    // Mostrar o relatório com o valor a pagar por cada cliente
    printf("\nRelatório de Pagamento:\n");
    printf("-------------------------------------------------\n");
    printf("Código | E-mail              | Valor a Pagar\n");
    printf("-------------------------------------------------\n");
    for (int i = 0; i < num_clientes; i++) {
        float valorPagar = calcularValorPagar(clientes[i]);
        printf("%-6d | %-20s | R$ %.2f\n", clientes[i].codigo, clientes[i].email, valorPagar);
    }
    printf("-------------------------------------------------\n");

    return 0;
}
