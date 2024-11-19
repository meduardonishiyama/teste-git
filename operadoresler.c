#include <stdio.h>
#include <stdlib.h>

int main()
{
    //(true)&&(true) confere a expressão da direita e da esquerda
    int i = 20;
    int condicao = ((i>20)&&(i<100));
    printf("%i\n", condicao);
    printf("%i", !condicao);
    // || se uma das condições for verdadeira ele retornar true.
    
    

    return 0;
}