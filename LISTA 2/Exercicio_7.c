#include <stdio.h>
void main() {
  float saldo, valor;
  int op, boo;

  saldo = 0;
  valor = 0;
  op = 0;
  boo = 0;



  printf("Insira o valor do seu saldo:\n");
  scanf("%f",&saldo);

while (boo==0) {

  printf("Seu saldo: %.3f\n",saldo);

  printf("Insira a operacao (1.Deposito/2.Retirada/3.Fim):\n");
  scanf("%d",&op);

  if (op==3) {
    printf("Seu saldo: %.3f\n",saldo);
    boo = 1;

  } else if (op==2) {
    printf("Quanto voce deseja retirar?\n");
    scanf("%f",&valor);
    saldo = saldo - valor;

  } else if (op==1) {
    printf("Quanto voce deseja depositar?\n");
    scanf("%f",&valor);
    saldo = saldo + valor;

  } else {
    printf("Insira a operacao (1.Deposito/2.Retirada/3.Fim):\n");
    scanf("%d",&op);

  }

  }
  if (saldo==0) {
    printf("CONTA ZERADA: %.3f\n",saldo);
  } else if (saldo<0) {
    printf("CONTA ESTOURADA:%.3f\n",saldo);
  } else if (saldo>0) {
    printf("CONTA PREFERENCIAL:%.3f\n",saldo);
  }

}
