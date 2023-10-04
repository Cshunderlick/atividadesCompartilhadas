#include <stdio.h>
#include <stdlib.h>

int main()
{
    char n1[50], rua[100];

    printf("nome e endereco:\n");
    printf("entre com o seu nome:\n");
    scanf("%s", &n1);
    printf("entre com a rua em que reside:\n");
    scanf("%s", &rua);
    printf("O nome do usuario e cidade e que reside e:\n");
    printf("%s, %s", n1, rua);
}