// Função que valida o cartão usando o algoritimo de luhh
bool ValidadeCard(const char *NumberCard){

    // variavel boll , que vai ficar alternando entre true e false durante o for
    bool alternar = false;
    int sum = 0;

    // i = a quantidade de digitos do array, ou seja 17(array sempre tem um valor invissivel "\0");
    int i = strlen(NumberCard); // = digitos do cartão

    // j = 17-1 , j - 1 no fim do loop sempre
    // e tambem  coloca o numero do cartão de trás pra frente
    for (int j = i - 1 ; j >= 0;j--)
    {
        // Converte os caracteres numeros
        int digito = NumberCard[j] - '0'; // aparentemenete uma char '3' - '0' = 3 em int
        // o if , pega o numero atual da variavel DIGITO
        if(alternar) // só multiplica o Valor por 2 , SE alternar for = true 
        {
            digito *= 2;

            }if(digito > 9){
                // garantir que o digito fique entre 0 a 9
             digito -= 9;
         }
        sum += digito; 
        alternar = !alternar;// ao fim do loop atual altenar ganha o valor inverso , ou seja , se alternar =  true => altenar = false, e vice versa
    }

    return sum % 10 == 0;
}
// função que encontra o tipo do cartão
void typeCard(const char *NumberCard) {
    if (NumberCard[0] == '4') {
        printf("Visa\n");
    }
    else if ((NumberCard[0] == '5') &&
             (NumberCard[1] == '1' || NumberCard[1] == '2' || NumberCard[1] == '3' || NumberCard[1] == '4' || NumberCard[5] == '5')) {
        printf("MasterCard\n");
    }
    else if ((NumberCard[0] == '3') && (NumberCard[1] == '4' || NumberCard[1] == '7')) {
        printf("Amex\n");
    }
    else {
        printf("Tipo de cartão desconhecido\n");
    }
}