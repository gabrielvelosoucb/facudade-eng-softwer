#include <iostream>

int main(){
    int const tam=10;
    int vetor[tam];
    int maior;
    int pos;
    printf("preencha o vetro com 10 valores");
    for(int i=0;i<tam;i++){
        scanf("%d", &vetor[i]);
    }
    maior=vetor[0];
    printf("vetor;\n");
    for (int i = 1; i < tam; i++)
    {
        printf("%d, \n",vetor[i]);
        if(vetor[i]>maior){
            maior=vetor[i];
            pos=i;
        }
    }
    printf("maior elemento e ;%d\n",maior);
    printf("esta na porcição: %d",pos);
    return 0;
    
}