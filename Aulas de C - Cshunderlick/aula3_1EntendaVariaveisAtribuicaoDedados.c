#include <stdio.h>

#define texto "Entrada e saida de dados."

int main()
{
    printf("%s\n\n", texto);

    int idade = 0;
    float altura = 0.0;
    char nome[50] = "";

    printf("Digite a idade:\n");
    scanf("%d", &idade);

    printf("Digite a altura:\n");
    scanf("%f", &altura);

    printf("Digite o nome:\n");
    scanf("%s", nome);
    printf("\n");

    printf("Dados informados:\n");
    printf("Idade: %d.\n", idade);
    printf("altura: %2.f\n", altura);
    printf("nome: %s.\n", nome);
}