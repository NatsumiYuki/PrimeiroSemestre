#include <stdio.h>
typedef struct {
  char nome[100];
  int dia, mes;
} Info;

//aponta para um vetor (main)
void PreencherCadastro(Info * cadastro){
  int i;
  for(i = 0 ; i < 5 ; i++){
        printf ("Nome: \n");
        scanf (" %[^\n]s", cadastro[i].nome);
        printf ("Dia e mes: \n ");
        scanf ("%d %d",  &cadastro[i].dia, &cadastro[i].mes);
  }
}

void Imprimir(Info * cadastro){
  int i, j;
  printf ("Aniversario\n");
  for (i = 1 ; i <= 12 ; i++){
     printf ("\t Mes %d \n", i);
      for(j = 0 ; j < 5 ; j++){
        if(cadastro[j].mes == i){
          printf ("\t\t %s - %d\n", cadastro[j].nome, cadastro[j].dia);
        } 
    }
  }
}



int main(void) {
  Info p[5];
  PreencherCadastro(p);
  Imprimir(p);
  return 0;
}