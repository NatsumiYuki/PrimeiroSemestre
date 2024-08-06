#include <stdio.h>
#include <string.h>

int main() {
  char phoneNum[20]; // To store the user-entered phone number
  char correctedNum[20]; // To store the corrected phone number

  printf("Digite seu número de telefone (com ou sem hifens): ");
  fgets(phoneNum, sizeof(phoneNum), stdin);

  // Remove trailing newline character
  phoneNum[strcspn(phoneNum, "\n")] = '\0';

  // Check if the phone number has only 8 digits
  int length = strlen(phoneNum);
  if (length == 8) {
    // Add the '9' prefix to the corrected number
    strcpy(correctedNum, "9");
    strcat(correctedNum, phoneNum);

    // Print the corrected phone number without formatting
    printf("\nTelefone possui 8 dígitos. Vou adicionar o digito nove na frente.\n");
    printf("Telefone corrigido sem formatação: %s\n", correctedNum);

    // Insert hyphens in the corrected number
    int i, j = 4; // Start adding hyphens after the 4th character
    for (i = 0; i < length; i++) {
      correctedNum[j++] = phoneNum[i];
      if (i == 3 || i == 6) {
        correctedNum[j++] = '-';
      }
    }
    correctedNum[j] = '\0';

    // Print the corrected phone number with formatting
    printf("Telefone corrigido com formatação: %s\n", correctedNum);
  } else {
    printf("\nSeu número de telefone já está formatado corretamente.\n");
  }

  return 0;
}
