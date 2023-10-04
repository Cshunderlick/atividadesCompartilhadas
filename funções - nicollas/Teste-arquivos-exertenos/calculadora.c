#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "Math.h"

int main(){
    int option,valor1,valor2,calc;
    do
    {
    system("cls");
    printf("Calculadora Simples. \n\n");
    printf("1 - somar \n");
    printf("2 - subitrair \n");
    printf("3 - multiplicar \n");
    printf("4 - divisao \n");
    printf("5 - encerrar programa\n");
    printf("Escolha apenas um dos numeros : \n");
    scanf("%d",&option);
    
    switch (option)
    {
    case 1:
    system("cls");
        printf("digite o valor do numero 1 : \n");
        scanf("%d",&valor1);
        printf("agora digite o valor do numero 2 : \n");
        scanf("%d",&valor2);
        calc = adicao(valor1,valor2);
        printf("o resultado de %d + %d = %d",valor1,valor2,calc);
        // comando abaixo aguarda usuario usar o teclado para continuar
        while (getchar() != '\n');
        getchar();
        
        break;
    case 2:
        system("cls");
        printf("digite o valor do numero 1 : \n");
        scanf("%d",&valor1);
        printf("agora digite o valor do numero 2 : \n");
        scanf("%d",&valor2);

        calc = subtracao(valor1,valor2);
        printf("o resultado de %d - %d = %d",valor1,valor2,calc);
        while (getchar() != '\n');
        getchar();


        break;
    case 3:
        system("cls");
        printf("digite o valor do numero 1 : \n");
        scanf("%d",&valor1);
        printf("agora digite o valor do numero 2 : \n");
        scanf("%d",&valor2);
        calc = multiplacao(valor1,valor2);
        printf("o resultado de %d x %d = %d",valor1,valor2,calc);
        // comando abaixo aguarda usuario usar o teclado para continuar
        while (getchar() != '\n');
        getchar();
        
        break;
    case 4:
        system("cls");
        printf("digite o valor do numero 1 : \n");
        scanf("%d",&valor1);
        printf("agora digite o valor do numero 2 : \n");
        scanf("%d",&valor2);

        calc = Divisao(valor1,valor2);
        printf("o resultado de %d / %d = %d",valor1,valor2,calc);
        while (getchar() != '\n');
        getchar();


        break;
    default:
        system("cls");
        printf("numero incorreto!!, voltando para o inicio. \n");
        Sleep(500);
        system("cls");
        printf("numero incorreto!!, voltando para o inicio.. \n");
        Sleep(500);
        system("cls");
        printf("numero incorreto!!, voltando para o inicio... \n");
        Sleep(500);
        break;
    }
}while (option != 5);
}
