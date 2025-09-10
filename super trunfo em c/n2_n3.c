#include <stdio.h>

int main() {
    





    int numero1, numero2;
    int soma, subtracao, multiplicacao, divisao;

    printf("entre com o primeiro numero: \n");
    scanf("%d", &numero1);
    printf("entre com o segundo numero: \n");
    scanf("%d", &numero2);
 
    //operaçaõ soma
    soma= numero1 + numero2;
    //operaçao subtração
    subtracao= numero1 - numero2;
    //operaçao multiplicação
    multiplicacao= numero1 * numero2;
    //operaçao divisão
    divisao= numero1 / numero2;

    printf("o resultado da soma é: %d \n", soma);
    printf("o resultado da subtração é: %d \n", subtracao);
    printf("o resultado da multiplicação é: %d \n", multiplicacao);
    printf("o resultado da divisão é: %d \n", divisao);

    return 0;

}