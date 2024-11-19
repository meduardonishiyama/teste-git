#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main ()
{
    int i = 10;// = atribuição

    printf ("Digite um número != de 5\n");
    scanf("%i", &i);
    
    if (i!=5)// == igual  != diferente
    {
        printf("A Expressao e:\n");
        printf("TRUE \t seu número não é 5");
    }else{
        printf("A Expressao e:\n");
        printf("FALSE \t seu número é 5");
    }

    //printf ("\t%i\n", i!=1);
    //printf("\t%i\n", !(i==1)); // ! é um sinal de negação, igual a expressão NOT

    return 0;
}