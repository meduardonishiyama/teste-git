#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

int main()
{
    double num1, num2, resultado;
    char operador = '0';

    do
    {
    num1=num2=resultado=0;

    printf("\t\t\tBem vindo a calculadora do Eduardo\n");
    printf("Digite 1 caso você queira somar\n");
    printf("Digite 2 caso você queira subtrair\n");
    printf("Digite 3 caso você queira multiplicar\n");
    printf("Digite 4 caso você queira dividir\n");
    printf("Informe a Operacao: \n");
    operador = getche();
    printf("\nDigite o primeiro numero: \n");
    scanf("%lf", &num1);
    printf("Digite o segundo numero: \n");
    scanf("%lf", &num2);

    }while(operador=='0'); //Enquanto isso for verdade o loop continuará
        if (operador=='1')
        {
            resultado = num1 + num2;
            printf("O Resultado da soma equivale a: %.2lf", resultado);
        }else if(operador=='2')
            {
                resultado = num1 - num2;
                printf("O Resultado da subtracao equivale a: %.2lf", resultado);
            }else if(operador=='3')
                {
                    resultado = num1 * num2;
                    printf("O Resultado da multiplicacao equivale a: %.2lf", resultado);
                }else if(operador=='4')
                    {
                        resultado = num1 / num2;
                        printf("O Resultado da divisao equivale a: %.2lf", resultado);
                    }else if(operador!= '1' && operador != '2' && operador != '3' && operador != '4')
                        {
                            printf("Operacao invalida, escolha uma opcao de 1 a 4");
                        }

    return 0;
}