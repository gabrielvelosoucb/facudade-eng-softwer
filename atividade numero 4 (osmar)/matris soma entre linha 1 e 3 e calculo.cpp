#include <stdio.h>

int main() {
   int matriz[4][4] = {{45,32,83,95},
                       {26,14,37,42},
                       {40,43,65,77},
                       {74,79,48,55}};
   int soma2a4 = 0;
   int soma2 = 0;
   int soma3 = 0;
   int soma4 = 0;
   int i, j;

   
   for (i = 1; i <= 3; i++) {
      for (j = 0; j < 4; j++) {
         soma2a4 += matriz[i][j];
         if (i == 1) {
            soma2 += matriz[i][j];
         }
         else if (i == 2) {
            soma3 += matriz[i][j];
         }
         else if (i == 3) {
            soma4 += matriz[i][j];
         }
      }
   }


   int maior = soma2;
   if (soma3 > maior) {
      maior = soma3;
   }
   if (soma4 > maior) {
      maior = soma4;
   }

   printf("A soma dos valores entre a primeira e a terceira linha : %d\n", soma2a4);
   printf("A maior soma entre elas e : %d\n", maior);

   return 0;
}