#include <stdio.h>

int main(void) {
  float preco_compra, preco_venda, lucro, percentual_lucro, valor_total = 0, venda_total = 0, lucro_total = 0;
  int mercadoria10 = 0, mercadoria20 = 0, mercadoriamaior = 0;

  do {
    printf("Preço de compra da mercadoria (digite 0 para finalizar):\n");
    scanf("%f", &preco_compra);

    if (preco_compra == 0)
      break;

    printf("Preço de venda da mercadoria:\n");
    scanf("%f", &preco_venda);

    venda_total += preco_venda;
    valor_total += preco_compra;
    
    lucro = preco_venda - preco_compra;
    percentual_lucro = (lucro / preco_compra) * 100;

    if (percentual_lucro < 10){
      mercadoria10++;
    } else if (percentual_lucro >= 10 && percentual_lucro <= 20){
      mercadoria20++;
    } else {
      mercadoriamaior++;
    }
//Somar o lucro
    lucro_total += lucro;
    
  } while (preco_compra > 0);

  

  printf("Lucro abaixo de 10%%: %d\n", mercadoria10);
  printf("Lucro entre 10%% e 20%%: %d\n", mercadoria20);
  printf("Lucro acima de 20%%: %d\n", mercadoriamaior);
  printf ("O lucro total: %.2f\n", lucro_total);

  return 0;
}