#include <stdio.h>

int main()
{
    float m;

    printf("Insira a nora:\n");
    scanf("%f", &m);

    if(m >= 7.0){
        printf("Aprovado(a)!\n");
    }else{
        printf("reprovado(a)\n");
    }
}
//diferente da aula anterior ou era executado, ou era ignorado, nesse caso apenas um deles pode ser
//real 
