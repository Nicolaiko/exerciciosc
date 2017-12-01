#include <stdio.h>

void main () {

  int meds, cont, medm, qntj, golmarc, golsofri, venceu, perdeu, empatou;
  float medgsof = 0, medgmar = 0;

  qntj = 0;
  golmarc = 0;
  golsofri = 0;
  venceu = 0;
  perdeu = 0;
  empatou = 0;
  meds = 0;
  medm = 0;
  cont = 0;

  printf("Insira a quantidade de jogos do seu time:\n");
  scanf("%d",&qntj);

  for (qntj=qntj;qntj>=1;qntj=qntj-1){
    cont=cont+1;
    printf("Quantos gols foram marcados no jogo %d ?\n",qntj);
    scanf("%d",&golmarc);
    medm=medm+golmarc;

    printf("Quantos gols foram sofridos no jogo %d ?\n",qntj);
    scanf("%d",&golsofri);
    meds=meds+golsofri;

    if (golmarc>golsofri) {
      venceu++;
    }
    else if (golmarc==golsofri) {
      empatou++;
    }
    else {
      perdeu++;
    }
    system("clear");
  }

medgmar=medm/cont;
medgsof=meds/cont;

printf("Media de gols marcados: %f gols por jogo.\n",medgmar);
printf("Media de gols sofridos: %f gols por jogo.\n",medgsof);
printf("Seu time venceu %d jogos.\n",venceu);
printf("Seu time perdeu %d jogos.\n",perdeu);
printf("Seu time empatou %d jogos.\n",empatou);


}
