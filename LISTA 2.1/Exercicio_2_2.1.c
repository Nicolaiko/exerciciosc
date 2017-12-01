#include <stdio.h>

void main() {
char opcao;

do {
  printf("\nS - Soma\n");
  printf("\nP - Produto\n");
  printf("\nU - subtração\n");
  printf("\nD - Divisão\n");
  printf("\nQ - Sair\n");
  scanf("%c%*c",&opcao);
  if (opcao != 'Q') {
    switch (opcao) {
      case 'S':
        printf("\nVoce escolheu soma.\n");
        break;
      case 'P':
        printf("\nVoce escolheu Produto.\n");
        break;
      case 'U':
        printf("\nVoce escolheu subtração.\n");
        break;
      case 'D':
        printf("\nVoce escolheu divisão.\n");
        break;
      default:
        printf("\nOpção de menu invalida!!\n");
    }
  }

} while(opcao != 'Q');

printf("\nVoce escolheu sair\n");

}
