#include <stdio.h>
#include <stdlib.h>

int main()
{
    float media, np1, np2, notaPim;

    printf("Entre com as nota das NPs, na seguinte sequencia NP1 e depois NP2:\n");
    scanf("%f", &np1);
    scanf("%f", &np2);
    printf("Entre com a nota do PIM:\n");
    scanf("%f", &notaPim);
    media = (4 * np1 + 4 * np2 + 2 * notaPim) / 10;
    printf("A media final e: %.2f \n", media);
    if (media >= 7)
    {
        printf("aprovado");
    }
    else
    {
        printf("reprovadasso, burro");
    }
}