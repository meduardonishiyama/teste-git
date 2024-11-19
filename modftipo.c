#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
        1) char
        2) int
        3) float
        4) double
        5) void - vazio

        1) signed   -  + e -
        2) unsigned  - somente +
        3) long  - aumentar capacidade de armazenamento da var
        4) short  - diminuir capacidade de armazenamento da var
    */

   double u;
   printf("%i\n", sizeof(u));

    int i = 10;
    printf("%i", sizeof(i));
   

   return 0;
}