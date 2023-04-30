#include <iostream>

int main(){
int const tam=5;
float vetor[tam];
float menor = 132468543246543246543246874;
float maior =0;
int posm = 0;
int posmr = 0;

printf("digite os 5 numero inteiros");
for (int i = 0; i < tam; i++)
{
    scanf("%f",&vetor[i]);
    if(vetor[i]>maior){
        maior = vetor[i];
        posm = i;
    }
    if (vetor[i]<menor)
    {
        menor = vetor[i];
        posmr = i;
    }
    
}

printf("O maior valor digitado foi %.2f e esta na posicao %d\n", maior, posm);
 printf("O menor valor digitado foi %.2f e esta na posicao %d\n", menor, posmr);
    
    return 0;
}