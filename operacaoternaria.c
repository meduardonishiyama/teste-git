#include <stdio.h>
#include <stdlib.h>

int main ()
{
    //expressao ? valorTrue: valorFalse;

    int x = 0;

    if (x==0){
        x=10;
    }else{
        x=20;
    }
    int y = 0;

    if(y==0){
        y=10;
    }else{
        y=20;
    }

    int num, num2;
    printf("informe um numero: \n");
    scanf("%i", &num);

   // if(num<0){
   //     num2=0;
   // }else{
   //     num2=num;
   // }

   num2 = (num < 0) ? 0 : num;

    printf ("O Valor de num2 é: %i\n", num2);

    int num3 = 11;

    (num3 == 10)? printf("Sim"): printf("Não");


    return 0;
}