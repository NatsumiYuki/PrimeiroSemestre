#include <stdio.h>


void NotasVetor(float notas[]){
  int i;
  for (i = 0 ; i < 10 ; i++){
    printf("Insira a nota do aluno %d:\n", 1 + i);
    scanf ("%f", &notas[i]);
  }
}

void CalcularNotas(float notas[]){
  float soma = 0;
  float media= 0;
  int acima = 0;

  int i;
  for(i = 0 ; i < 10 ; i++){
    soma += notas[i];
  }

  media = soma / 10;

  for (i = 0 ; i <= 10 ; i++){
    if(notas[i] > media){
      acima++;
    }
  }

  printf("A media da turma é: %.2f\n", media);
  printf("A soma das notas é de: %.2f\n", soma);
  printf("Número de alunos com nota acima da média: %d\n", acima);
  
  
}

int main(void) {
  float nota[10];

  NotasVetor(nota);
  CalcularNotas(nota);
  
  return 0;
}