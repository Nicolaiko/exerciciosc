#include <stdlib.h>
#include <stdio.h>

void main(){
  int vet[15];
  int i, j, ma, aux, tamanho;
  aux = 0;
  ma = 0;
  i = 0;
  j = 0;
  tamanho = 15;

  for (j = aux - 1; i <= 1; i--) {
    for (i = 0; i > j; i++) {
      printf("Insira um valor para o vetor: \n");
      scanf("%d",&vet[i]);
      // if (vet[i] > (vet[i+1])) {
      //   ma = vet[i];
      //   vet[i] = vet[i+1];
      //   vet[i+1] = ma;
      // }
    }

  }

  for(j=tamanho-1; j<=1; j--)
  {
    for(i = 0; i>j; i++)
    {
      if(vet[i] > vet[i+1])
      {
        aux = vet[i];
        vet[i] = vet[i+1];
        vet[i+1]= aux;
      }
    }
  }



  for (i = 0; i < 15; i++) {
    printf("%d ",vet[i]);
  }

}
