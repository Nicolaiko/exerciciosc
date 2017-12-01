#include <stdio.h>
#include <string.h>

void main(){
  int i, j, cont, cont2;
  char vetgab[9];
  char vetaluno[10][9];
  char pts[10];
  i = 0;
  j = 0;
  cont = 0;
  cont2 = 0;

  for (j = 0; j < 8; j++) {
    cont = cont + 1;
    printf("Insira a resposta para a %d* questão da Prova:\n",cont);
    scanf("%s",&vetgab[j]);
  }
  vetgab[j]='\0';

    printf("Seu gabarito é: %s \n",vetgab);

  for (i = 0; i < 10; i++) {
    cont = 0;
    cont2 = cont2 + 1;
    for (j = 0; j < 8; j++) {
      cont = cont + 1;
      printf("Insira a resposta para a %d* questão da Prova do %d* aluno:\n",cont, cont2);
      scanf("%s",&vetaluno[i][j]);
      if (vetgab[j]==vetaluno[i][j]) {
        pts[i] = pts[i] + 1;
      }
      if (vetgab[2]==vetaluno[i][2]) {
        pts[i] = pts[i] + 1;
      }
      if (vetgab[7]==vetaluno[i][7]) {
        pts[i] = pts[i] + 1;
      }
      vetaluno[i][j]='\0';
    }
  }
  cont2 = 0;
  for (i = 0; i < 10; i++) {
    cont2 = cont2 + 1;
    printf("A pontuação do %d* aluno é: %d \n", cont2, pts[i]);
  }
}
