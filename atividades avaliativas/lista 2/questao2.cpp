#include <iostream>
#include <cmath>

int main() {
    float x1, y1, x2, y2;
    printf("Digite as coordenadas do primeiro ponto (x1, y1): ");
    scanf("%f %f", &x1, &y1);
    printf("Digite as coordenadas do segundo ponto (x2, y2): ");
    scanf("%f %f", &x2, &y2);

    float distancia = (x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1);
    distancia = exp(0.5 * log(distancia));

    printf("A distancia entre os pontos (%.2f, %.2f) e (%.2f, %.2f) eh: %.4f\n", x1, y1, x2, y2, distancia);

    return 0;
}
