#include <stdio.h>
#include <stdlib.h>

int main(){
    int num1, num2;
    num1 = 15;
    num2 = 20;

    int soma = num1 + num2;
    printf("O Resultado da Soma: %i\n", soma);

    int subtracao = num1 - num2;
    printf("O Resultado da Subtração: %i\n", subtracao);

    int multi = num1 * num2;
    printf("O Resultado da Multiplicação: %i\n", multi);

    int divisao = num1/3;
    printf ("O Resultado da Divisão é: %i\n", divisao);

    return 0;
}