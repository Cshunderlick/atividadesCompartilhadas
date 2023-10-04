#include <stdio.h>
#include <stdlib.h>
#include <windows.h>


int optionTheme,optionTicket;
char name[20],email[20];
   
    int main (){
    
    printf("antes de comecamos por favor nos informe seu nome e email\n\n");
    printf("nome:");
    scanf("%s",name);
    printf("e-mail:");
    scanf("%s",email);


    while (optionTheme != 1 && optionTheme != 2 && optionTheme != 3)
    {
        system("cls");
        printf("%s, Seja bem vindo ao nosso Museu MultiTematico !!\n", name);
        printf("==============================================\n");
        printf("qual tema voce gostaria de ver?\n\n");
        printf("(1) - tema1 \n");
        printf("(2) - tema2 \n");
        printf("(3) - tema3 \n\n");
        printf("Por favor escolhar apenas apenas um dos numeros : \n");
        scanf("%d",&optionTheme);

        if (optionTheme != 1 && optionTheme != 2 && optionTheme != 3)
        {
            Sleep(1);
        }else{
            Sleep(500);
        }

    }
    
    while (optionTicket != 1 && optionTicket != 2 && optionTicket != 3 )
    {
    system("cls");
    printf("Qual entrada voce gostaria de comprar?? \n");
    printf("==============================================\n\n");

    printf("(1) - | %-20s | %-20s |\n", "Meia", "ValorX");
    printf("(2) - | %-20s | %-20s |\n", "Inteira", "ValorY");
    printf("(3) - | %-20s | %-20s |\n\n", "Isenta", "R$0");
    Sleep(300);

    printf("Por favor escolhar apenas apenas um dos numeros : \n");
    scanf("%d",&optionTicket);

    if (optionTicket != 1 && optionTicket != 2 && optionTicket != 3 )
    {
        Sleep(1);
    }else{
        Sleep(500);
    }
    
    }
    
}