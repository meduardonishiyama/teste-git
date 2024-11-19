#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 1;
    printf("%i\n", i);
    printf("%i\n", ++i);    //Incrementa antes da instrução
    printf("%i\n", i++);    //Incrementa após a instrução
    printf("%i", i);

    system("cls");

    int i2 = 5;

    printf("%i\n", i2);
    printf("%i\n", --i2);
    printf("%i\n", i2--);
    printf("%i", i2);

    return 0;
}