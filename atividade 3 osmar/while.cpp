#include <stdio.h>

int main() {
    int soma = 0, num;

    printf("Digite numeros inteiros ate que a soma seja pelo menos 30:\n");

    while(soma < 30) {
        printf("Digite um numero: ");
        scanf("%d", &num);
        soma += num;
    }

    printf("A soma dos numeros digitados e: %d", soma);

    return 0;
}