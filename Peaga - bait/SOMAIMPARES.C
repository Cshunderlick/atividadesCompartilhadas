#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cmc, fnl, nmr, soma;
    printf("digite um numero: \n");
    scanf("%d", &cmc);

    printf("digite o segundo numero: \n");
    scanf("%d", &fnl);

    soma = 0;
    nmr = cmc;

    while (nmr <= fnl)
    {
        if (nmr / 2 < 0 || nmr / 2 > 0)
        {
            soma = soma + nmr;
        }
        nmr = nmr + 1;
        printf("A soma dos impares no intervalo e: %d \n", soma);
    }
}