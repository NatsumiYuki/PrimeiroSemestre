#include <stdio.h>
//função para o fatorial
int fatorial(int n){
  int fat = 1;
  // Começa com um pois n se miltplica fatorial por 0
  for (int i = 1 ; i <= n ; i++){
    fat *= i;
  }
  return fat;
}

int main(void) {
  int n;
  float resp, e = 0;
  
  printf ("Insira um numero inteiro: \n");
  scanf ("%d", &n);
  //Numerador
  for (int i = 1 ; i <= n ; i++){
    e += (float) 1 / fatorial(i);
    printf ("%.2f \n", e);
  } 
  
  
  return 0;
}