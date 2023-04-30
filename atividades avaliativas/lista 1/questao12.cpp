#include <iostream>

int main(){
    int const tam=5;
    float vetor[tam];
    float maior = 0;
    float menor = 6543246513214654321685434;
    float media = 0;

    printf("Digite 5 valores para calcular e saber as medias:");
    for (int i = 0; i < tam; i++)
    {
        scanf("%f", &vetor[i]);
        if(vetor[i]>maior){
            maior = vetor[i];
        }
        if (vetor[i] < menor)
        {
            menor = vetor[i];
        }
        media = media + vetor[i];
    }
    media = media / tam;

    printf("\nO maior numero digitado e: %.2f", maior);
    printf("\nO menor numero digitado e: %.2f", menor);
    printf("\nA media de todos os numeros digitados e: %.2f", media);    
    return 0;
}
