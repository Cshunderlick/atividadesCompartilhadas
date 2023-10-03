#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a, b, c;

    printf("Entre com o primeiro numero:");
    scanf("%f", &a);
    printf("Entre com o segundo numero");
    scanf("%f", &b);
    c = a + b;
    printf("A soma e: %.2f", c);
    return (0);
}