#include <stdio.h>

int main() {
    float primeiro_termo, razao, decimo_termo;
    int n = 10; // n-ésimo termo desejado (décimo termo)

    // Ler o primeiro termo da PA
    printf("Digite o primeiro termo da PA: ");
    scanf("%f", &primeiro_termo);

    // Ler a razão da PA
    printf("Digite a razão da PA: ");
    scanf("%f", &razao);

    // Calcular o décimo termo da PA
    decimo_termo = primeiro_termo + (n - 1) * razao;

    
    printf("O décimo termo da PA é: %.2f\n", decimo_termo);

    return 0;
}
