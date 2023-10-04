#include <stdio.h>

int main()
{
    int dado = 10;
    printf("Dados antes do incremento: %d.\n", dado);

    dado++;
    printf("Dado depois do incremento de +1: %d.\n", dado);

    dado--;
    printf("Dado depois do decremento de -1: %d.\n", dado);

    dado += 3;
    printf("Dado depois do incremento de +3: %d.\n", dado);

    dado -= 3;
    printf("Dado depois do decremento de -3: %d.\n", dado);

    dado *= 10;
    printf("Dado depois da multiplicacao por 10: %d.\n", dado);

//nesse final ele pega o valor anterior que estava armazenado em dado que era de 10 e divide por 5

    dado /= 5;
    printf("Dado depois da divisao por 2, mais a soma da diferenca: %d.\n", dado);
}