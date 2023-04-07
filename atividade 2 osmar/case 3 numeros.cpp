#include <stdio.h>

int main() {
    int num1, num2, num3;
    int maior, menor;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    printf("Digite o terceiro número: ");
    scanf("%d", &num3);

    // Inicializa as variáveis maior e menor com o primeiro número
    maior = num1;
    menor = num1;

    // Verifica qual é o maior e o menor número
    if (num2 > maior) {
        maior = num2;
    } else if (num2 < menor) {
        menor = num2;
    }

    if (num3 > maior) {
        maior = num3;
    } else if (num3 < menor) {
        menor = num3;
    }

    // Exibe o maior e o menor número ou a mensagem "Números iguais"
    if (maior == menor) {
        printf("Números iguais\n");
    } else {
        printf("O maior número é %d e o menor número é %d\n", maior, menor);
    }

    return 0;
}