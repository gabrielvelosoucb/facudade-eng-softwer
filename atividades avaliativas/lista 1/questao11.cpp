#include <iostream>

int main(){
    int const tam=10;
    int vetor[tam];
    int negativo = 0;
    int possitivo= 0;

    printf("digite 10 numeros reais");
    for (int i = 0; i < tam; i++)
    {
        scanf("%d",&vetor[i]);
        if(vetor[i]>0){
            possitivo += vetor[i];
        }
        else if (vetor[i]<0){
            negativo++;
        }
    }
    printf("a quntidade de numeros negativo e de : %d", negativo);
    printf(" a soma dos possitivo e; %d", possitivo);
    return 0;
    
}