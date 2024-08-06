#include <stdio.h>
#include <string.h>

void convertToUppercase(char *str) {
    int i;

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] -= 32; 
        }
    }
}

int main() {
    char str[100];

    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);

    // Remove trailing newline character
    str[strcspn(str, "\n")] = '\0';

    convertToUppercase(str);

    printf("String em maiúscula: %s\n", str);

    return 0;
}
