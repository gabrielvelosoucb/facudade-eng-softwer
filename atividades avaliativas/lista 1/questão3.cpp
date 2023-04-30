#include <iostream>
#include <cmath>
#include <cstdio>

int main () {
    const int tam = 10;
    float vetora[tam];
    float vetorb[tam];

printf("digite o numero %d \n:",tam);
    for(int i = 0;i<tam;i++){
     scanf("%f", &vetora[i]);
    }
    printf("\n");
    for(int i = 0;i<tam;i++){
        vetorb[i]=vetora[i] * vetora[i];
    }
    printf(" vetor A \n");

    for(int i = 0;i<tam;i++){
        printf("%.2f \n", vetora[i]);
    }
        printf(" vetor B \n");

    for(int i = 0;i<tam;i++){
        printf("%.2f \n", vetorb[i]);
    }
    return 0;
}