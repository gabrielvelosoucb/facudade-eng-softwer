#include <stdio.h>

int main() {
   int matriz[4][4] = {{45,32,83,95},
                       {26,14,37,42},
                       {40,43,65,77},
                       {74,79,48,55}};
   int soma = 0;
   float media;
   int i, j;

   for (i = 0; i < 4; i++) {
      for (j = 0; j < 4; j++) {
         soma += matriz[i][j];
      }
   }

   media = soma / 16.0;

   printf("A media aritmetica: %.2f\n", media);

   return 0;
}