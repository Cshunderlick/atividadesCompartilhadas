#include <stdio.h>
#include <stdlib.h>

int main(){

    printf("Oi, tudo bem ? Tenho 6 anos e programo. \n");
    
    printf("Valor inteiro: %d.\n", 10);
    printf("Valor real: %f.\n", 3.14159265);
    printf("Valor real com apenas duas casa: %.2f.\n", 3.14159265);
    printf("Dados de texto: %c. \n", 'a');
    printf("Dados de texto: %s.\n", "testando");

//%d ou %i numeros inteiros em base decimal
//%x numeros inteiros em base hexadecimal 
//%f numeros em pontos flutuantes (com casas decimais)
//%e numeros em notação cientifica ( com casas decimais)
//%c caractere alfanumerico (texto)
//%s sequencia de caracteres alfa numericos (texto)
//.<numero> especifica quantos digitos serao impressos apos a virgula 

//Sequencia de escape
// \a toca um bipe, alarme sonoro padrao do sistema 
// \b backspace
// \n quebra de linha
// \t tabulacao horizontal 
// \r retona ao inicio da linha 
// \0 caractere nulo
// \v tabulacao vertical
// \\ caractere \
// \' caractere '
// \" caractere "
// \? caractere ?
// \123 caractere relacionado ao codigo 123 em octal (ascii)
// \x12 caractere relacionado ao codifo 12 em hexadecimal (ascii)
// %% Caractere %
}