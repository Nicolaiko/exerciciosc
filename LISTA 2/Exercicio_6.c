#include <stdio.h>

void main() {
  int lote, num, soma, cheque, i, aux, aux2;
  lote = 0;
  num = 0;
  soma = 0;
  cheque = 0;
  i = 1;
  aux = 0;
  aux2 = 0;

while ((lote<=0) || (num<=0)) {
  printf("Insira o valor da soma do lote de cheques: \n");
  scanf("%d",&lote);

  printf("Insira a quantidade de cheques no lote:\n");
  scanf("%d",&num);
}

  for (i = 1; i <= num; i++) {
    aux = aux + 1;
    printf("Insira o cheque numero %d: \n",aux);
    scanf("%d",&cheque);
    soma = soma + cheque;
  }

if (soma == lote) {
  printf(" LOTE OK \n");
} else if (soma < lote) {
  aux2 = lote - soma;
  printf(" DIFERENCA NEGATIVA: %d \n",aux2);
} else if (soma > lote) {
  aux2 = soma - lote;
  printf(" DIFERENCA POSITIVA: %d \n",aux2);
}

}
