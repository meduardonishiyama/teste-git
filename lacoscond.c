#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/*
    faça{

    }enquanto();

    do while, primeiro faz a linha e depois checa
*/

int main()
{   

    int tecla = 0;
    char c;
    do
    {
        tecla += 1;
        printf("Digite a tecla 0 para sair\n");
        printf("A contagem está em é: %i\n", tecla);
        c = getchar();
        while (getchar() != '\n');
    }
    while(c!='0');


    return 0;
}