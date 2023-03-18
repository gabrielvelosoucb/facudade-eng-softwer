#include <stdio.h>

int main()
{
float l;
float c;
float metragem;
float lata;

printf("\n\tbem-vindo ao programa de calcula para pintura");
printf("\n responda as perguntas a baixo para podermos caucular\n o quantidade de tinta que sera nessesaria");
printf("\ndigite a largura em metros quadrados: \t");
scanf("%f",&l);
printf("digite o comprimento em metros quadrados:\t");
scanf("%f",&c);
metragem = l * c;
lata = (metragem * 300) / 2000;
printf("\n a area total da pintura e: \t %.2f", metragem);
printf("\n a quantidade de latas nessesarias : \t %.2f", lata);
    return 0;
}
