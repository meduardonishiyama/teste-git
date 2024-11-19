#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, soma, subtracao, multi;
    float div;

    printf("Calculadora 1.0\n");
    printf("Digite os dois números a serem processados: ");
    scanf("%i%i", &num1, &num2);

    soma=num1+num2;
    subtracao=num1-num2;
    multi=num1*num2;
    div=num1/num2;

    printf("A Soma é:  %i\n", soma);
    printf("A Subtração é: %i\n", subtracao);
    printf("A Multiplicação é: %i\n", multi);
    printf("A Divisão é: %2f\n", div);

    return 0;
}