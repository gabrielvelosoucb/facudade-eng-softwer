#include <iostream>

int main() {
    int a,b,c,d;
    int dif;
    printf("digite os valores de A, B, C e d;\n");
    scanf("%d %d %d %d",&a ,&b ,&c ,&d);
    dif= (a*b)-(c*d);
       printf("DIFERENCA = (%d * %d - %d * %d)\n", a, b, c, d);
    printf("DIFERENCA = (%d)\n", dif);

    return 0;
}