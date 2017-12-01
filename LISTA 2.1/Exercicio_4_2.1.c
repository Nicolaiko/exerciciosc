#include <stdio.h>

void main (){
int a, b, c, pri, seg, ter;
a = b = c = pri = seg = ter = 0;

printf("Digite o primeiro numero:\n");
scanf("%d",&a);

printf("Digite o segundo numero:\n");
scanf("%d",&b);

printf("Digite o terceiro numero:\n");
scanf("%d",&c);

if (a>b && a>c) {
  pri = a;
  if (b>c) {
    seg = b;
    ter = c;
  }else {
    seg = c;
    ter = b;
  }
} else if (b>a && b>c) {
  pri = b;
  if (a>c) {
    seg = a;
    ter = c;
  }else {
    seg = c;
    ter = a;
  }
}else if (c>b && c>a) {
  pri = c;
  if (b>a) {
    seg = b;
    ter = a;
  }else {
    seg = a;
    ter = b;
  }
}

printf("\nOs numeros em ordem crescente sao: %d - %d - %d \n",ter, seg, pri);

}
