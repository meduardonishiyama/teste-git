#include <stdio.h>

int main()
{
    // printf("%tipoDeSaida", valor_a_ser_impresso);
    //printf("%tipo1 %tipo2", var1, var2);

    //integer %i OU %d
    //float ou double %f e %lf
    //char %c
    //string %s

    //%u (numero inteiro sem o sinal)
    //%p (endereço de memória)
    //%e OU %E (para imprimir números com notação cientifica)
    //%% (IMPRIMIR O SIMBOLO DE %)

    int x = 10;
    printf("%i\n", x);

    float ff = 4.12;
    printf("%f\n", ff);

    printf ("%i - %f \n", x, ff);

    return 0;
}