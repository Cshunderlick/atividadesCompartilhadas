#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("hello, world\n\n");

    // Dentro da <stdlib.h> existe a função "sistem("pause")", ela faz com que o programa
    //.exe caso for executado diretamente pelo windowns pause a janela do cmd, ao invez
    // de executar e fechar automaticamente, no programa aparecerá a seguinte frase:
    //  "pressione qualquer tecla para continuar..."
    system("pause");
}