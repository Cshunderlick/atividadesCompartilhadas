#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <windows.h>
#include "CardCalc.h"


int main() 
{
    int maxLength = 17;
    char Card[maxLength];
    printf("       V a l i d a d o r  D e  C a r t a o          \n");
    printf("================================================\n\n");
    printf("Digite o numero do cartao que sera verficiado :");
    scanf("%s", &Card);

    if (strlen(Card) > 0 && Card[strlen(Card) - 1] == '\n') {
        Card[strlen(Card) - 1] = '\0'; 
     }
    else if (ValidadeCard(Card))
     {  
        system("cls");
        printf("Numero : %s",Card);
        typeCard(Card);
        

     } else {
        printf("O cartao de crédito é invalido.\n");
     }
    
    
    }