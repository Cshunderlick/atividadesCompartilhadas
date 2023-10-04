#include <stdio.h>
#include <stdlib.h>
#include <windows.h>


int main() { 
    int option;
    // metodo nao recomendado , porem gostaria que o programa pudesse voltar caso a opção sera incorreta
    inicio_programa: 
    system("cls");
    printf("Biscoito ou Bolacha?? \n\n");
    printf("1 - biscoito \n");
    printf("2 - bolacha \n");
    printf("3 - tudo igual \n");
    printf("Escolha apenas um dos numeros : \n");
    scanf("%d",&option);

    switch (option)
    {
    case 1 :
        system("cls");
        printf("o usuario diz que o certo seria biscoito.");
        break;

    case 2:
        system("cls");
        printf("o usuario diz que o certo seria bolacha.");
        break;

    case 3:
        system("cls");
        printf("o usuario nao se importa com esse tipo de coisa.");
        break;

    default: 
        system("cls");
        printf("numero incorreto!!, voltando para o inicio... \n");
        Sleep(1000);
        goto inicio_programa;
    }

    return 0;
}