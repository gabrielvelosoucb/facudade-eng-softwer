#include <iostream>

int main(){
    int const tam = 7;
    int vetor[tam];
    int x,y;

printf("digite 8 numero inteiro para prencher os valores %d \n", tam);
    for(int i=0 ;i<tam;i++){
        scanf("%d", &vetor[i]);
    }
    printf("de dois valores par X e Y, respectivamente; \t");
    scanf("%d %d", &x, &y);

    int soma = vetor[x] + vetor[y];

    printf("\nA soma das posicoes x e y do vetor e: %d\n", x, y, soma);

    return 0;
}