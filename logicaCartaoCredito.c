#include <stdio.h>
#include <stdbool.h>

// Função para verificar o tamanho do número do cartão e seus dígitos iniciais
bool verificarNumeroCartao(long long numeroCartao)
{
    int tamanho = 0;
    while (numeroCartao > 0)
    {
        numeroCartao /= 10;
        tamanho++;
    }

    return (tamanho == 13 || tamanho == 15 || tamanho == 16);
}

// Função para verificar a soma de verificação (checksum)
bool verificarChecksum(long long numeroCartao)
{
    int soma = 0;
    bool multiplicarPorDois = false;

    while (numeroCartao > 0)
    {
        int digito = numeroCartao % 10;

        if (multiplicarPorDois)
        {
            digito *= 2;
            if (digito > 9)
            {
                digito -= 9;
            }
        }

        soma += digito;
        multiplicarPorDois = !multiplicarPorDois;
        numeroCartao /= 10;
    }

    return (soma % 10 == 0);
}

int main()
{
    long long numeroCartao;
    printf("Digite o numero do cartao de credito: ");
    scanf("%lld", &numeroCartao);

    if (verificarNumeroCartao(numeroCartao) && verificarChecksum(numeroCartao))
    {
        printf("O numero do cartao de credito e valido \n");
    }
    else
    {
        printf("O numero do cartao de credito e invalido\n");
    }

    return 0;
}
