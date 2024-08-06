#include <stdio.h>
#include <stdlib.h>

int main() {
  FILE *fp; // File pointer
  char line[1024]; // Buffer to store each line
  int lineCount = 0; // Counter for line count

  // Open the file "user_text.txt" in "read" mode
  fp = fopen("user_text.txt", "r");

  if (fp == NULL) {
    printf("Erro ao abrir o arquivo.\n");
    exit(1);
  }

  // Read each line from the file
  while (fgets(line, sizeof(line), fp) != NULL) {
    printf("%s", line); // Print the current line
    lineCount++; // Increment the line count
  }

  // Check if any error occurred during reading
  if (ferror(fp)) {
    printf("Erro ao ler o arquivo.\n");
    fclose(fp);
    exit(1);
  }

  // Close the file
  fclose(fp);

  // Print the total line count
  printf("\nTotal de linhas: %d\n", lineCount);

  return 0;
}
