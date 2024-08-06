#include <stdio.h>
#include <stdlib.h>

int main() {
  FILE *fp; // File pointer
  char text[1024]; // Buffer to store the user's text

  // Prompt the user to enter the text
  printf("Digite o texto que deseja salvar: ");
  fgets(text, sizeof(text), stdin);

  // Remove the trailing newline character
  text[strcspn(text, "\n")] = '\0';

  // Open the file "user_text.txt" in "write" mode
  fp = fopen("user_text.txt", "w");

  if (fp == NULL) {
    printf("Erro ao abrir o arquivo.\n");
    exit(1);
  }

  // Write the user's text to the file
  fprintf(fp, "%s", text);

  // Close the file
  fclose(fp);

  printf("Texto salvo no arquivo user_text.txt com sucesso.\n");

  return 0;
}
