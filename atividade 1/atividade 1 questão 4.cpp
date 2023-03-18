#include <stdio.h>
int main()
{
    int n1;
    int n2;
    int n3;
    int n4;
    int meida;
    printf("bem vindo a sua calculadora de media");
    printf("\n digite suas notas para que possamos te fornecer sua media");
    printf("\n digite a primeira nota:\t");
    scanf("%d", &n1);
    printf("\n digite a segunda nota:\t");
    scanf("%d", &n2);
    printf("\n digite a terceira nota:\t");
    scanf("%d", &n3);
    printf("\n digite a quarta nota:\t");
    scanf("%d", &n4);
    meida = (n1 + n2 + n3 + n4) / 4;
    printf("\n\n sua media foi de : \t %d", meida);

    return 0;
}
