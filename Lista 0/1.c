#include <stdio.h>

int main() {

  int numero, invertido;

  printf("Insira um numero de 3 digitos: \n");
  scanf("%d", &numero);

  int unidade = numero % 10;
  int dezena = (numero / 10) % 10;
  int centena = (numero / 100) % 10;
  
  invertido = (unidade * 100) + (dezena * 10) + centena;

  printf ("Numero invertido: %d\n", invertido);


    return 0;
}