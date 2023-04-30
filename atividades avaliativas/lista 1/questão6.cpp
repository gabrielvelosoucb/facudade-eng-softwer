#include <iostream>

int main(){
    int const  tam= 10;
    int vetor[tam];
    int maior, menor;

    printf("preencha o vetor com os 10 numror: \n");
    for(int i=0; i<tam;i++){
        scanf("%d",&vetor[i]);
    }
    maior=menor=vetor[0];
    for(int i=1;i<tam;i++){
        if(vetor[i]>maior){
            maior=vetor[i];
        }
        if(vetor[i]<menor){
            menor=vetor[i];
        }
    }
    printf("o menor valor e:%d \n", menor);
    printf("o maior valor e:%d \n", maior);
    return 0;
}