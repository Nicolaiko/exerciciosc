#include <stdio.h>

void main() {

int x, y, aux, i, aux2;
x = 0;
y = 0;
aux = 0;
aux2 = 1;
i = 0;

printf("Insira dois valores X e Y, onde X<Y:\n");
scanf("%d",&x);
scanf("%d",&y);

while (x>=y) {
  printf("Insira dois valores X e Y, onde X<Y:\n");
  scanf("%d",&x);
  scanf("%d",&y);
}
for (i = x; i <= y; i = i + 1) {

    if (i%2 == 0) {
      aux = aux + i;
    }
    else {
      aux2 = aux2 * i;
    }
  }

printf("A soma dos numeros pares no intervalo de %d e %d: %d \n",x,y,aux);
printf("A multiplicacao dos numeros impares no intervalo de %d e %d: %d \n",x,y,aux2);


}
