#include <stdio.h>
#include <math.h>

/*
x1 = 8
x2 = 4
y1 = 9
y2 = 3

8 - 4 = 4^2 = 16
9 - 3 = 6^2 = 36
36 + 16 = 52
52 = 7.21

*/

int main() {

    float distancia, calculo_x, calculo_y;
    struct pontos_cartesiano{
        float ponto_x;
        float ponto_y;
    };

    struct pontos_cartesiano Pontos_1;
    struct pontos_cartesiano Pontos_2;

    printf("Digite o X do primeiro ponto: ");
    scanf("%f", &Pontos_1.ponto_x);

    printf("Digite o Y do primeiro ponto: ");
    scanf("%f", &Pontos_1.ponto_y);

    printf("Digite o X do segundo ponto: ");
    scanf("%f", &Pontos_2.ponto_x);

    printf("Digite o Y do segundo ponto: ");
    scanf("%f", &Pontos_2.ponto_y);

    calculo_x = (Pontos_2.ponto_x - Pontos_1.ponto_x);

    calculo_x = pow(calculo_x, 2);

    calculo_y = (Pontos_2.ponto_y - Pontos_1.ponto_y);

    calculo_y = pow(calculo_y, 2);

    distancia = sqrt(calculo_x + calculo_y);

    printf("A distancia é: %f", distancia);

}