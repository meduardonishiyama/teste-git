#include <stdio.h>
#include <stdlib.h>
/*
    switch(expressão)
    {
        case(expressao-cost):
            break;
        case(true):
            break; //não permite pular para a próxima instrução do switch (default)
        default:
            //não a necessidade de colocar um break.


    }
*/

int main()
{
    printf("Digite um valor entre 0 e 9\n>>>");
    int i;
    scanf("%i", &i);

    switch(i){
        case 0:
            printf("A opção digitada foi 'ZERO'\n");
        break;
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            printf("você digitou um numero entre 1 e 5'\n");
        break;
        case 6:
            printf("A opção digitada foi 'SEIS'\n");
        break;
        case 7:
            printf("A opção digitada foi 'SETE'\n");
        break;
        case 8:
            printf("A opção digitada foi 'OITO'\n");
        break;
        case 9:
            printf("A opção digitada foi 'NOVE'\n");
        break;
        default:
            printf("Opção inválida! Escolha um número entre 0 e 9.\n");
    }   

    return 0;
}