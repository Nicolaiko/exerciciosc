#include <stdio.h>
#include <stdlib.h>

void main() {

int a, b, c, ma, me;
float re1, re2;
a = b = c = ma = me = re1 = re2 = 0;

while (a<=0) {
printf("Insira o primeiro numero a (maior que 0 e inteiro):\n");
scanf("%d",&a);
}

while (b<=0 && a>0) {
printf("Insira o segundo numero b (maior que 0 e inteiro):\n");
scanf("%d",&b);
}

while (c<=0 && a>0 && b>0) {
printf("Insira o terceiro numero c (maior que 0 e inteiro):\n");
scanf("%d",&c);
}

if (a>b && a>c) {
  ma = a;
}

if (a<b && a<c) {
  me = a;
}

if (b>a && b>c) {
  ma = b;
}

if (b<a && b<c) {
  me = b;
}

if (c>b && c>a) {
  ma = c;
}

if (c<b && c<a) {
  me = c;
}

re1 = me*ma;
re2 = (float)ma/(float)me;

printf("MENOR(%d)*MAIOR(%d)=%.1f\n",me,ma,re1);
printf("MAIOR(%d)/MENOR(%d)=%.1f\n",ma,me,re2);


}
