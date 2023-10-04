#include <stdio.h>
#include <math.h>

int main()
{
    int soma, subtr, mult;
    double a, b, divis;

    printf("Digite o primeiro valor:\n");
    scanf("%lf", &a);
    printf("Digite o segundo valor:\n");
    scanf("%lf", &b);

    soma = a + b;
    subtr = a - b;
    mult = a * b;
    divis = a / b;

    printf("Resultado:\n");
    printf("Soma:%d.\n", soma);
    printf("subtracao:%d.\n", subtr);
    printf("Multplicacao:%d.\n", mult);
    printf("divisao:%.2f.\n", divis);
}