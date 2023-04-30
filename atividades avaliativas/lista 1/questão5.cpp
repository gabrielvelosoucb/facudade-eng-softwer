#include <iostream>

int main(){
    int const tam=10;
    int vetor[tam];
    int pares=0;

    printf("preancha o vetor com 10 numeros:%d\n", tam);
    for(int i = 0; i<tam; i++){
        scanf("%d",&vetor[i]);
    }
    printf("valores pares do vetor :");

    for(int i = 0; i<tam; i++){
        if(vetor[i] % 2==0){
            printf("%d, ", vetor[i]);
        }
    }
        for(int i = 0; i<tam; i++){
        if(vetor[i] % 2==0){
           pares++;
        }
    }
    printf("\ntotalizando:%d numaros pares",pares);

    return 0;

}