#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int n = 0;
    int x = 1;
    printf("Devo contar até quantos?");
    scanf("%i", &n);

    while(x<=n){
        printf("%i\n", x);
            x = x+1;
    }

    return 0;
}