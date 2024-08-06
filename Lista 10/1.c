#include <stdio.h>
#include <stdlib.h>

int main() {
  FILE *fp; // File pointer

  // Open the file "numbers.txt" in "write" mode
  fp = fopen("numbers.txt", "w");

  if (fp == NULL) {
    printf("Erro ao abrir o arquivo.\n");
    exit(1);
  }

  // Write numbers from 1 to 10 to the file
  for (int i = 1; i <= 10; i++) {
    fprintf(fp, "%d\n", i);
  }

  // Close the file
  fclose(fp);

  printf("Números escritos no arquivo numbers.txt com sucesso.\n");

  return 0;
}
