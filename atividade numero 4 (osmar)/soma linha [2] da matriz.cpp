#include <stdio.h>

int main() {
   int matriz[4][4] = {{45,32,83,95},
                       {26,14,37,42},
                       {40,43,65,77},
                       {74,79,48,55}};
   int soma = 0;
   int i;

   
   for (i = 0; i < 4; i++) {
      soma += matriz[2][i];
   }

   printf("A soma dos valores da terceira linha: %d\n", soma);

   return 0;
}