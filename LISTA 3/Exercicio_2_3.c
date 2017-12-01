#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main(){
  int vetorig[10];
  int vetorand[10];
  int num, i, cont, cont2, ma, me, posma, posme;
  num = 0;
  i = 0;
  cont = 0;
  cont2 = 0;
  ma = 0;
  me = 999999;
  posma = 0;
  posme = 0;

  for (i = 0; i < 10; i++) {
    printf("Insira o valor para o índice %d do seu vetor:\n",cont);
    scanf("%d",&vetorig[i]);
    cont = cont + 1;
  }

  printf("Digite um número:\n");
  scanf("%d",&num);
  for (i = 0; i < 10; i++) {
    if (num == vetorig[i]) {
      printf("O número %d está no índice n* %d do vetor. \n",num, i);
    }
  }

  for (i = 0; i < 10; i++) {
    if (vetorig[i]>ma) {
      ma = vetorig[i];
      posma = i;
    }
    if (vetorig[i]<me) {
      me = vetorig[i];
      posme = i;
    }
  }

  printf("O maior numero é %d e sua posição é no índice %d.\n",ma,posma);
  printf("O menor numero é %d e sua posição é no índice %d.\n",me,posme);

  for (i = 0; i < 10; i++) {
    if (vetorig[i] % 2 == 0) {
      printf("O numero %d é par. \n",vetorig[i]);
    }else{
      printf("O numero %d é ímpar. \n",vetorig[i]);
    }
  }

  cont = 0;
  for (i = 0; i < 10; i++) {
    cont = vetorig[i] + cont;
  }
  printf("A soma de todos os números é: %d \n",cont);

  cont = 0;
  cont2 = 0;
  for (i = 0; i < 10; i++) {
    if (vetorig[i] > 0) {
      cont = vetorig[i] + cont;
    } else{
      cont2 = vetorig[i] + cont2;
    }
  }
  printf("A soma dos números positivos é: %d \n",cont);
  printf("A soma dos números negativos é: %d \n",cont2);

  for (i = 0; i < 10; i++) {
    vetorand[i] = rand() % 100;
  }
  printf("O primeiro vetor: ");
  for (i = 0; i < 10; i++) {
    printf("%d ",vetorig[i]);
  }

  printf("\nO segundo vetor randomico: ");
  for (i = 0; i < 10; i++) {
    printf("%d ",vetorand[i]);
  }
}
