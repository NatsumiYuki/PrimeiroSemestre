#include <stdio.h>

int main(void) {
  int numero, resp, sequencia, positivo = 0, zero = 0, negativos = 0, conti;
  float percentualp, percentualz, percentualn;
  
   printf ("Quantos numeros na sequencia: \n");
   scanf ("%d", &sequencia);
   printf("Numero da sequencia: %d \n",sequencia);

  for (int i = 1 ; i <= sequencia ; i++){
    printf ("numero:");
    scanf ("%d", &numero);
    if (numero == 0){
      zero++;
    } else if (numero >=1){
      positivo++;
    } else if (numero < 0){
      negativos++;
    }
  }
  percentualp = (float)positivo/sequencia * 100; 
  percentualz = (float)zero/sequencia * 100;
  percentualn = (float)negativos/sequencia * 100;


    printf ("postivos %d percent %.2f zeros %d percent %.2f negativos %d percent %.2f", positivo, percentualp, zero, percentualz, negativos, percentualn);
  printf("Numero da positivo: %d \n",positivo);
  return 0;
}