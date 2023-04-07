#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    for (int i = numero; i >= 0; i--) {
        printf("%d ", i);
    }

    return 0;
}