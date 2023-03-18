#include <stdio.h>

int main()
{
float l;
float c;


printf("bem-vindo ao programa de calcula circuferencias");
printf("\n responda as perguntas a baixo para podermos caucular");
printf("digite o raio da circuferencia: \t");
scanf("%f",&l);
c = 3.14 * (l * l);
printf(" a area da circuferencia e: \t %.2f", c);
    return 0;
}
