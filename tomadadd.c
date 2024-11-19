#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char C;

    printf ("Digite um caracter em letra minúscula: \n");
    scanf ("%c", &C);

    if (C >= 'a')
    {
        printf("Segue a letra que você digitou em maiúscula: %c\n", 
            toupper(C));
    }

    return 0;
}