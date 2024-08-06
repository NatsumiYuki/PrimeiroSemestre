#include <stdio.h>
#include <stdlib.h>

int main() {
  int numLetters, vowelCount = 0; // Variables for number of letters and vowel count
  char ch; // Character to read from file
  FILE *fp; // File pointer

  // Prompt the user for the number of letters
  printf("Digite o número de letras que deseja inserir: ");
  scanf("%d", &numLetters);

  // Check if the number is positive
  if (numLetters <= 0) {
    printf("Erro: O número de letras deve ser positivo.\n");
    exit(1);
  }

  // Open the output file "letters.txt" in "write" mode
  fp = fopen("letters.txt", "w");
  if (fp == NULL) {
    printf("Erro ao abrir o arquivo.\n");
    exit(1);
  }

  // Get and write letters to the file
  printf("Digite as letras (uma por uma): ");
  for (int i = 0; i < numLetters; i++) {
    scanf(" %c", &ch); // Read a single letter with a space to avoid whitespace issues
    fputc(ch, fp); // Write the letter to the file
  }

  // Close the file
  fclose(fp);

  // Reopen the file "letters.txt" in "read" mode
  fp = fopen("letters.txt", "r");
  if (fp == NULL) {
    printf("Erro ao abrir o arquivo.\n");
    exit(1);
  }

  // Read and count vowels from the file
  while ((ch = fgetc(fp)) != EOF) {
    switch (ch) {
      case 'a':
      case 'A':
      case 'e':
      case 'E':
      case 'i':
      case 'I':
      case 'o':
      case 'O':
      case 'u':
      case 'U':
        vowelCount++;
        break;
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

  // Print the vowel count
  printf("\nNúmero de vogais: %d\n", vowelCount);

  return 0;
}
