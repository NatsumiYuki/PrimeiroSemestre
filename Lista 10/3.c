#include <stdio.h>
#include <stdlib.h>

int main() {
  FILE *fp; // File pointer
  char ch; // Character to count
  int count = 0; // Counter for 'a' occurrences

  // Open the file "user_text.txt" in "read" mode
  fp = fopen("user_text.txt", "r");

  if (fp == NULL) {
    printf("Erro ao abrir o arquivo.\n");
    exit(1);
  }

  // Read each character from the file
  while ((ch = fgetc(fp)) != EOF) {
    if (ch == 'a') {
      count++; // Increment the count if the character is 'a'
    }
  }

  // Check if any error occurred during reading
  if (ferror(fp)) {
    printf("Erro ao ler o arquivo.\n");
    fclose(fp);
    exit(1);
  }

  // Close the file
  fclose(fp);

  // Print the count of 'a' occurrences
  printf("O número de caracteres 'a' no arquivo é: %d\n", count);

  return 0;
}
