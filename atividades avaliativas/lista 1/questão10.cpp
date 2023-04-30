#include <iostream>

int main(){
    int const tam=15;
    float nota[tam];
    float media = 0;

    printf("diggite as notas dos alunos",tam);
    for (int i = 0; i < tam; i++)
    {
        scanf("%f", &nota[i]);
        media=media+nota[i];
    }
    media=media/tam;
    printf("\n a media da turama e; %.2f",media);
    return 0;

}