#include <stdio.h>

int main() {
    float euros;

    printf("Introduce la cantidad en euros que deseas convertir: ");
    scanf("%f", &euros);

   
    float dolares = euros * 1.09;

    printf("%.2f euros equivalen a %.2f dolares.\n", euros, dolares);

    return 0;
}
