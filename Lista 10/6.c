#include <stdio.h>
#include <stdlib.h>

int main() {
  int num, sumOfDivisors = 0; // Variables for input number and sum
  FILE *fp; // File pointer

  // Prompt the user to enter a number
  printf("Digite um número: ");
  scanf("%d", &num);

  // Check if the number is positive
  if (num <= 0) {
    printf("Erro: O número deve ser positivo.\n");
    exit(1);
  }

  // Find and print divisors
  printf("Divisores: ");
  for (int i = 1; i <= num; i++) {
    if (num % i == 0) {
      printf("%d ", i);
      sumOfDivisors += i;
    }
  }

  // Open the output file "divisors_sum.txt" in "write" mode
  fp = fopen("divisors_sum.txt", "w");
  if (fp == NULL) {
    printf("Erro ao abrir o arquivo.\n");
    exit(1);
  }

  // Write the sum of divisors to the file
  fprintf(fp, "Soma dos divisores de %d: %d\n", num, sumOfDivisors);

  // Close the file
  fclose(fp);

  printf("\nSoma dos divisores salva no arquivo divisors_sum.txt.\n");

  return 0;
}
