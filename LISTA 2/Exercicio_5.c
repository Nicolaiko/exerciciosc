#include <stdio.h>
void main() {
  int nota1, nota2, opt;
  float media;

  media = 0;
  nota1 = 0;
  nota2 = 0;
  opt = 0;

  printf("Escreva a nota da sua primeira avaliacao:\n");
  scanf("%d",&nota1);

  printf("Escreva a nota da sua segunda avaliacao:\n");
  scanf("%d",&nota2);

  printf("Escreva a nota da sua avaliacao optativa. Caso nao exista, insira um valor negativo:\n");
  scanf("%d",&opt);

  if (opt>=0) {

  if (nota1<nota2) {
    nota1 = opt;
  } else if (nota2<nota1) {
    nota2 = opt;
  } else {
    nota2 = nota1;
  }

  }

  media = ((float)nota1+(float)nota2)/2;

  printf("Sua media final: %.1f ---",media);

  if (media>=70) {
    printf(" APROVADO\n");
  } else if ((media<70) && (media>=50)) {
    printf(" EXAME\n");
  } else {
    printf(" REPROVADO\n");
  }

}
