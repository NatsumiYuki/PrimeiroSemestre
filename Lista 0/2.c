#include <stdio.h>

int main() {
    float salario_minimo, kw_consumidos, valor_por_kw, valor_total, valor_com_desconto;

    // Ler o valor do salário mínimo
    printf("Digite o valor do salário mínimo: ");
    scanf("%f", &salario_minimo);

    // Ler a quantidade de kilowatt consumida
    printf("Digite a quantidade de kilowatts consumida: ");
    scanf("%f", &kw_consumidos);

    // Calcular o valor de cada kilowatt
    valor_por_kw = (salario_minimo / 7) / 100;

    // Calcular o valor total a ser pago
    valor_total = valor_por_kw * kw_consumidos;

    // Calcular o valor com desconto de 10%
    valor_com_desconto = valor_total * 0.90;

    // Mostrar os resultados
    printf("Valor de cada kilowatt: R$ %.2f\n", valor_por_kw);
    printf("Valor total a ser pago: R$ %.2f\n", valor_total);
    printf("Valor com desconto de 10%%: R$ %.2f\n", valor_com_desconto);

    return 0;
}