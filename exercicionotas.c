#include <stdio.h>
#include <stdlib.h>

int main()
{
    double nota1, nota2, nota3, nota4, media;
    nota1=nota2=nota3=nota4=media=0;

    printf ("Digite a primeira nota: \n");
    scanf ("%lf", &nota1);

    printf ("Digite a segunda nota: \n");
    scanf ("%lf", &nota2);

    printf ("Digite a terceira nota: \n");
    scanf ("%lf", &nota3);

    printf ("Digite a quarta nota: \n");
    scanf ("%lf", &nota4);

    media = (nota1 + nota2 + nota3 + nota4) / 4;

    if(media >= 6)
    {
        printf("Parabéns, sua média é de %.2lf você passou de ano!\n", media);
    }else{
        printf("Infelizmente sua média é de %.2lf, você reprovou.\n", media);
    }



    return 0;
}