#include <stdio.h>
#include <stdlib.h>

int main() {
  FILE *fp1, *fp2, *fp3; // File pointers
  char ch; // Character to read

  // Open the first file (file1.txt) in "read" mode
  fp1 = fopen("file1.txt", "r");
  if (fp1 == NULL) {
    printf("Erro ao abrir o arquivo file1.txt.\n");
    exit(1);
  }

  // Open the second file (file2.txt) in "read" mode
  fp2 = fopen("file2.txt", "r");
  if (fp2 == NULL) {
    printf("Erro ao abrir o arquivo file2.txt.\n");
    fclose(fp1);
    exit(1);
  }

  // Open the third file (concatenated.txt) in "write" mode
  fp3 = fopen("concatenated.txt", "w");
  if (fp3 == NULL) {
    printf("Erro ao abrir o arquivo concatenated.txt.\n");
    fclose(fp1);
    fclose(fp2);
    exit(1);
  }

  // Read and write characters from the first file
  while ((ch = fgetc(fp1)) != EOF) {
    fputc(ch, fp3);
  }

  // Check if any error occurred during reading the first file
  if (ferror(fp1)) {
    printf("Erro ao ler o arquivo file1.txt.\n");
    fclose(fp1);
    fclose(fp2);
    fclose(fp3);
    exit(1);
  }

  // Reset the file pointer to the beginning of the second file
  rewind(fp2);

  // Read and write characters from the second file
  while ((ch = fgetc(fp2)) != EOF) {
    fputc(ch, fp3);
  }

  // Check if any error occurred during reading the second file
  if (ferror(fp2)) {
    printf("Erro ao ler o arquivo file2.txt.\n");
    fclose(fp1);
    fclose(fp2);
    fclose(fp3);
    exit(1);
  }

  // Close all three files
  fclose(fp1);
  fclose(fp2);
  fclose(fp3);

  printf("Arquivos concatenados com sucesso em concatenated.txt.\n");

  return 0;
}
