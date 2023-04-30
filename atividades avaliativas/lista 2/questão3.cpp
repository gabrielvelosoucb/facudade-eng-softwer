#include <iostream>
#include <cstdio>

int main() {
    const double PI = 3.14159;
    double raio;

    printf("Digite o valor do raio da esfera: ");
    scanf("%lf", &raio);

    double volume = (4.0/3) * PI * raio * raio * raio;
    double area = 4 * PI * raio * raio;

    printf("A area da superficie da esfera eh: %.4lf\n", area);
    printf("O volume da esfera eh: %.4lf\n", volume);

    return 0;
}
