#include <stdio.h>

void main() {

  int valor, cont, soma;
  float media;

  soma = 0;
  cont= 0;
  media = 0;
  valor =0;

  while (valor>=0) {
    cont=cont+1;
    printf("Insira valores positivos ate um valor negativo:\n");
    scanf("%d",&valor);
    soma += valor;

  }

  media=(float)soma/(float)cont;
  printf("Media dos valores ja fornecidos: %.4f\n",media);
  printf("Quantidade de numeros fornecidos: %d \n",cont);

}
