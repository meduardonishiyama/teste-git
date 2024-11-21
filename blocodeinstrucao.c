#include <stdio.h>
#include <stdlib.h>

int main()
{
    double num = 10;
    char c = 's';

    {
        printf("Bloco 1\n");
        double dinheiro = 3.35;
        printf("O Valor e %.2lf: \n", dinheiro);
    }

    printf("Informe um numero: \n");
    scanf("%lf", &num);

    if(num==50)
        printf("Bloco IF.\n");
    else{
        printf("Bloco ELSE\n");
        printf("---\n");
    }

    return 0;
}