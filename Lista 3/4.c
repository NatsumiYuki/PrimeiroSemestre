#include <stdio.h>

// Procedimento para verificar e classificar o tipo de triângulo
void verificarTriangulo(float X, float Y, float Z) {
    // Verificando se os lados X, Y e Z formam um triângulo
    if (X < Y + Z && Y < X + Z && Z < X + Y) {
        // Identificando o tipo de triângulo
        if (X == Y && Y == Z) {
            printf("Triangulo Equilatero\n");
        } else if (X == Y || X == Z || Y == Z) {
            printf("Triangulo Isosceles\n");
        } else {
            printf("Triangulo Escaleno\n");
        }
    } else {
        printf("Nao forma um triangulo\n");
    }
}

int main() {
    float X, Y, Z;
    char continuar;

    do {
        // Entrada dos valores dos lados do triângulo
        printf("Digite os tres lados do triangulo (X Y Z): ");
        scanf("%f %f %f", &X, &Y, &Z);

        // Chamada do procedimento para verificar e classificar o triângulo
        verificarTriangulo(X, Y, Z);

        // Perguntar se deseja continuar
        printf("Deseja verificar outro triangulo? (S/N): ");
        scanf(" %c", &continuar);
    } while (continuar == 'S' || continuar == 's');

    return 0;
}
