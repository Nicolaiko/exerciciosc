#include <stdio.h>

void main(){
  int B, C1, C2, aux, i, tot;
  B = C1 = C2 = aux = i = tot = 0;

  for (i = 0; i < 20; i++) {
    printf("Eleitor, inicie a sua votação:\n 0 - voto em branco. \n 1 - Candidato 1. \n 2 - Candidato 2. \n outro - Voto nulo. \n");
    scanf("%d",&aux);
    while (aux!=1 && aux!=2 && aux!=0) {
      printf("Eleitor, inicie a sua votação:\n 0 - voto em branco. \n 1 - Candidato 1. \n 2 - Candidato 2. \n outro - Voto nulo. \n");
      scanf("%d",&aux);
    }
    if (aux==1) {
      C1 = C1 + 1;
    } if(aux==2) {
      C2 = C2 + 1;
    } if(aux==0){
      B = B + 1;
    }
  }
  printf("Total de votos Brancos:%d\n",B);
  printf("Total de votos Candidato 1:%d\n",C1);
  printf("Total de votos Candidato 2:%d\n",C2);
  tot = tot + C2 + C1 + B;
  printf("\nTotal de votos:%d\n",tot);

}
