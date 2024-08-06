#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isPalindrome(char *str) {
  int i, j;
  char temp[100]; // To store the filtered string

  // Copy the original string to temp, removing spaces and punctuation
  j = 0;
  for (i = 0; str[i] != '\0'; i++) {
    if (isalnum(str[i])) {
      temp[j++] = tolower(str[i]); // Convert to lowercase
    }
  }
  temp[j] = '\0'; // Add null terminator

  // Check if the reversed string is equal to the original string
  i = 0;
  j = strlen(temp) - 1;
  while (i < j) {
    if (temp[i] != temp[j]) {
      return 0; // Not a palindrome
    }
    i++;
    j--;
  }

  return 1; // It's a palindrome
}

int main() {
  char str[100];

  printf("Digite uma sequência de caracteres: ");
  fgets(str, sizeof(str), stdin);

  // Remove trailing newline character
  str[strcspn(str, "\n")] = '\0';

  int isPal = isPalindrome(str);

  if (isPal) {
    printf("%s é um palíndromo.\n", str);
  } else {
    printf("%s não é um palíndromo.\n", str);
  }

  return 0;
}
