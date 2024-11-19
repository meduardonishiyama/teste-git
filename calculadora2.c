#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

int main()
{
    double num1, num2, resultado;
    int escolha = 0;

    do
    {
        num1=num2=resultado=0;
        printf("Digite 1 para Somar\n");
        printf("Digite 2 para Subtrair\n");
        printf("Digite 3 para Multiplicar\n");
        printf("Digite 4 para Dividir\n");

        scanf("%i", &escolha);
    }while(escolha==0);

    if (escolha==1)
    {
        printf("Digite o primeiro numero.\n");
        scanf("%lf", &num1);
        printf("Digite o segundo numero.\n");
        scanf("%lf", &num2);
        resultado = num1 + num2;
        printf("%.2lf", resultado);
    }else if (escolha==2)
    {
        printf("Digite o primeiro numero.\n");
        scanf("%lf", &num1);
        printf("Digite o segundo numero.\n");
        scanf("%lf", &num2);
        resultado = num1 - num2;
        printf("%.2lf", resultado);
    }else if(escolha==3)
        {
            printf("Digite o primeiro numero.\n");
            scanf("%lf", &num1);
            printf("Digite o segundo numero.\n");
            scanf("%lf", &num2);
            resultado = num1 * num2;
            printf("%.2lf", resultado);
        }else if (escolha==4)
            {
                printf("Digite o primeiro numero.\n");
                scanf("%lf", &num1);
                printf("Digite o segundo numero.\n");
                scanf("%lf", &num2);
                resultado = num1 / num2;
                printf("%.2lf", resultado);
            }
    return 0;
}