#include <iostream>

int main(){
    int const tam=6;
    int vetor[tam];

    printf("digite os valors para o programa inverter;",tam);
    for (int i = 0; i < tam; i++)
    {
        scanf("%d",&vetor[i]);
    }
    printf("os valores em ordem inversa são;");
    for (int i = tam-1; i >= 0; i--)
    {
        printf("%d,",vetor[i]);
    }
    return 0;
}