#include <stdio.h>

int main() {
  int idades[5];
  int i, soma = 0, qtde_maiores = 0;
  float media;

  // leitura das idades
  for(i = 0; i < 5; i++) {
    printf("Digite a idade da pessoa %d: ", i+1);
    scanf("%d", &idades[i]);

    soma += idades[i];

    if(idades[i] > 18) {
      qtde_maiores++;
    }
  }

  // cálculo da média
  media = (float) soma / 5;

  // exibição dos resultados
  printf("\nMédia de idade: %.2f\n", media);
  printf("Idades maiores que 18 anos: ");
  for(i = 0; i < 5; i++) {
    if(idades[i] > 18) {
      printf("%d ", idades[i]);
    }
  }

  return 0;
}