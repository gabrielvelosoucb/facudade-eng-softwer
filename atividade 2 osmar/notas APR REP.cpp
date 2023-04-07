#include <stdio.h>

int main() {
    float nota1, nota2, nota3, nota4, media;

    printf("Digite as quatro notas: ");
    scanf("%f %f %f %f", &nota1, &nota2, &nota3, &nota4);

    media = (nota1 + nota2 + nota3 + nota4) / 4.0;

    printf("Média: %.2f\n", media);

    if (media >= 0.0 && media <= 3.0) {
        printf("Reprovado.\n");
    } else if (media > 3.0 && media <= 6.9) {
        printf("Recuperação.\n");
    } else if (media > 6.9) {
        printf("Aprovado.\n");
    }

    return 0;
}