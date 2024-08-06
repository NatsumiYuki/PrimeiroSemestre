#include <stdio.h>
#include <string.h>

void printDiagonal(char *word) {
  int i, j;

  // Iterate through each character in the word
  for (i = 0; word[i] != '\0'; i++) {
    // Print spaces to align the current character with the diagonal
    for (j = 0; j < i; j++) {
      printf(" ");
    }

    // Print the current character
    printf("%c\n", word[i]);
  }
}

int main() {
  char word[50];

  printf("Digite uma palavra: ");
  fgets(word, sizeof(word), stdin);

  // Remove trailing newline character
  word[strcspn(word, "\n")] = '\0';

  printDiagonal(word);

  return 0;
}
