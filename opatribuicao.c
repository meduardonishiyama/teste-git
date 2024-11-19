#include <stdio.h>
#include <stdlib.h>

int main()
{
    // += 1 (é o mesmo que x = x+1)
    // -= (é o mesmo que x = -1)
    // *= (é o mesmo que x = x*x)
    // /= -> divisão
    // %= -> resto da divisão

    int x = 0;

    /*while (x<=10)
    {
        printf("continuando\n");
            x+=1; //x = x+1;
    }
*/

  int i = 50;
  printf ("%i\n", i+=100);
  printf ("%i\n", i-=50);
  printf ("%i\n", i*=3);
  printf ("%i\n", i/=3);
  printf ("%i\n", i%=3);

    return 0;
}