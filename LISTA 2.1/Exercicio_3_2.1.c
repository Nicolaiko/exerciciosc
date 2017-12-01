#include <stdio.h>

void main() {
int nota1, nota2;
float media;
nota1 = 0;
nota2 = 0;
media = 0;

printf("Insira a primeira nota entre 0-100:\n");
scanf("%d",&nota1);

printf("Insira a segunda nota entre 0-100:\n");
scanf("%d",&nota2);

media = ((float)nota1+(float)nota2)/2;

if (media >= 70) {
  printf("\nAPROVADO:%.2f\n",media);

}else if ((media >= 40) && (media < 70)) {
  printf("\nEXAME:%2.f\n",media);

}else if (media < 40) {
  printf("\nREPROVADO:%2.f\n",media);
}

}
