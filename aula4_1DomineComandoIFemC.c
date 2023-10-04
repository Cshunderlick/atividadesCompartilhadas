#include <stdio.h>

int main()
{
    float m;

    printf("Insira a nota:\n");
    scanf("%f", &m);

    if (m >= 7.0)
    {
        printf("aprovado(a)!\n");
    }
    printf("Reprovado(a), burrao");
}