#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tabuada = 1;
    int multip = 0;
    printf("Tabuada 1.0\n");
    printf("Qual número deseja imprimir a tabuada?\n");
    scanf("%i", &multip);

    for(tabuada; tabuada <=10; ++tabuada) {
        printf("%i x %i = %i\n", tabuada, multip, tabuada*multip);
    }


    return 0;
}