#include <stdio.h>

void main(){
  int num, R, i;
  num, R, i = 0;

  printf("Insira um numero:\n");
  scanf("%d",&num);

  for (i = 0; i < 11; i++) {
    R = num * i;
    printf("%d * %d = %d \n",num, i, R);
  }
}
