#include <stdio.h>

int main (){
  int salario, maior_salario = 0, filho, total_salario = 0, total_filho = 0, maior_100 = 0, pessoas = 0;
  float media_filhos, percentual, media_populacao;

  // Fazer um loop ate salario negativo ou == 0
  do {
    printf ("Insira o salario: \n");
    scanf ("%d", &salario);

    // ver se salario e maior que 0
    if (salario > 0) {
      // contador de pessoas
      pessoas++;

      // Pegar todos os salarios
      total_salario += salario;

      // maior salario
      if (salario > maior_salario) {
        maior_salario = salario;
      }

      printf ("Insira o numero de filhos por habitante: \n");
      scanf ("%d", &filho); 
      // Total de filhos
      total_filho += filho;

      // percentual de salario maior que 100
      if (salario >= 100){
        maior_100++;
      }
    }
  } while (salario > 0);

  // media do salario da populacao
  media_populacao = (float) total_salario / pessoas;

  // media do numero de filhos
  media_filhos = (float) total_filho / pessoas;

  // percentual de salario maior que 100
  percentual = (float) maior_100 / pessoas * 100;

  printf ("Media do salario da populacao: %.2f\n", media_populacao);
  printf ("Media do numero de filhos: %.2f\n", media_filhos);
  printf ("Maior salario: %d\n", maior_salario);
  printf ("Percentual de salarios maiores que 100: %.2f%%\n", percentual);

  return 0;
}