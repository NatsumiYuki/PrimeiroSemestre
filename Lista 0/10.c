#include <stdio.h>

int main() {
    int hora, minuto, minutos_passados;

    // Ler o valor da hora
    printf("Digite a hora (0-23): ");
    scanf("%d", &hora);

    // Ler o valor do minuto (opcional)
    printf("Digite o minuto (0-59): ");
    scanf("%d", &minuto);

    // Calcular quantos minutos se passaram desde o início do dia
    minutos_passados = hora * 60 + minuto;

    // Mostrar o resultado
    printf("Desde o início do dia até %02d:%02d passaram %d minutos.\n", hora, minuto, minutos_passados);

    return 0;
}
