#include <stdio.h>

  int main() {
      int n, i;
      float S = 1;

      printf("Digite um valor inteiro e positivo para n: ");
      scanf("%d", &n);

      for (i = 1; i <= n; i++) {
          S += 1.0 / i;
          printf("Termo %d: %.2f\n", i, S);
      }

      printf("O valor final de S é: %.2f\n", S);

  return 0;
}