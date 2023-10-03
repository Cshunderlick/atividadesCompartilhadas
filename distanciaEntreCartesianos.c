#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float x1, x2, y1, y2, d;

    printf("para o calculo insira os valores de x1, x2, y1 e y2 na respectiva ordem.\n ");
    scanf("%f", &x1);
    scanf("%f", &x2);
    scanf("%f", &y1);
    scanf("%f", &y2);
    d = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    printf("O valor de D e:%f", d);
}