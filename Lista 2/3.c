#include <stdio.h>

int main(void) {
  int numero, divisivel3 = 0, divisivel2 = 0, divisivel5= 0;

  for (int i = 1 ; i <= 10 ; i ++){
    printf ("Insira um numero: \n");
    scanf ("%d", &numero);
    
    if (numero % 3 == 0 || numero % 9 == 0){
      divisivel3++;
    } else if (numero % 2 == 0){
      divisivel2++;
    } else if (numero % 5 == 0){
      divisivel5++;
    } else {
      printf ("Numero não e divisivel pelos valores");
    }
  }
  printf ("Divisivel por 3 e 9: %d Divisivel por 2: %d Divisivel por 5: %d", divisivel3, divisivel2, divisivel5);
  return 0;
}