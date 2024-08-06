#include <stdio.h>

int main(void) {
  int votos, votos1 = 0, votos2 = 0, votos3 = 0, votos4 = 0, votosnulo = 0, votosbranco = 0;

  do{

    printf ("Digite o numero do seu voto:\n");
    scanf ("%d", &votos);

    if (votos == 0)
      break;

    if (votos == 1){
      votos1++;
    } else if (votos == 2){
      votos2++;
    } else if (votos == 3){
      votos3++;
    } else if (votos == 4){
      votos4++;
    } else if (votos == 5){
      votosnulo++;
    } else if (votos == 6){
      votosbranco++;
    }
    
  } while (votos != 0);

  printf ("Total de votos para o candidato 1: %d\n", votos1);
  printf ("Total de votos para o candidato 2: %d\n", votos2);
  printf ("Total de votos para o candidato 3: %d\n", votos3);
  printf ("Total de votos para o candidato 4: %d\n", votos4);
  printf ("Total de votos nulos: %d\n", votosnulo);
  printf ("Total de votos em branco: %d\n", votosbranco);
  return 0;
}