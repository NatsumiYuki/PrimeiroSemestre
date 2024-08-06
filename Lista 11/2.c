#include <stdio.h>
#include <string.h>

// Função para inverter uma string
void inverterString(char *str) {
    int inicio = 0;
    int fim = strlen(str) - 1;
    char temp;

    while (inicio < fim) {
        temp = str[inicio];
        str[inicio] = str[fim];
        str[fim] = temp;
        inicio++;
        fim--;
    }
}

int main() {
    char string[] = "Hello, world!";
    
    printf("String original: %s\n", string);

    inverterString(string);

    printf("String invertida: %s\n", string);

    return 0;
}
