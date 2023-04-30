#include <iostream>
#include <stdio.h>

int main(){
    int const tam=6;
    int vetor[tam];

    printf("digite 6 numeros pares:");
    for (int i = 0; i < tam; i++)
    { 
        do{
            scanf("%d", &vetor[i]);
            if(vetor[i] % 2!=0)
            {
                printf("valor nao e um numero par, tente novamente \n");
            }
        
        }while(vetor[i] % 2!=0);
        
    }
    printf("os numeros pares em ordem inversa sao;");
    for (int i = tam-1; i >=0; i--)
    {
        printf("%d,", vetor[i]);
    }
    return 0;
}
