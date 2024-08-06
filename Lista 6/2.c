#include <stdio.h>
#include <stdlib.h>

int ContadorNegativos(int *vetor) {
  int n = 0, i;
  for (i = 0 ; i < 10 ; i++){
    if (vetor[i] < 0){
      n++;
    }
  }
  return n;
}

void VetorPreeencher(int *vetor){
  int i;
  for(i = 0 ; i < 10 ; i++){
    printf("Preencha um vetor com 10 inteiros %d: \n", 1 + i);
    scanf ("%d", &vetor[i]);
  }
  ContadorNegativos;
}

int ContadorNegativos(int *vetor) {
  int n, i;
  for (i = 0 ; i < 10 ; i++){
    if (vetor[i] < 0){
      n++;
    }
  }
  return n;
}

int * negativos (int vetor[], int n){
  int *novo_vetor = malloc( n * sizeof(int));
  int i, j = 0;
  for (i = 0 ; i < n ; i++){
    if (vetor[i] < 0){
      novo_vetor[i] = vetor[i];
    }
  }
  return novo_vetor;
}

void Exibir (int novo_vetor[], int n){
  int i;
  for (i = 0 ; i < n ; i ++){
    printf ("%d", novo_vetor[i]);
  }
printf ("\n");
}

int main(void) {
int vetor[10];
int *negativo;

  VetorPreeencher(vetor[10]);
  ContadorNegativos;
  *negativos;
  
  return 0;
}