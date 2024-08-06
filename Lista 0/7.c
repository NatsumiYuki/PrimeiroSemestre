#include <stdio.h>
#include <math.h>

int main() {
    float primeiro_termo, razao, quinto_termo;
    int n = 5; // n-ésimo termo desejado (quinto termo)

    // Ler o primeiro termo da PG
    printf("Digite o primeiro termo da PG: ");
    scanf("%f", &primeiro_termo);

    // Ler a razão da PG
    printf("Digite a razão da PG: ");
    scanf("%f", &razao);

    // Calcular o quinto termo da PG
    quinto_termo = primeiro_termo * pow(razao, n - 1);

    // Mostrar o quinto termo
    printf("O quinto termo da PG é: %.2f\n", quinto_termo);

    return 0;
}
