#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idadej, idadei;
    idadej = 17;
    idadei = 60;

    int idade;

    printf("Digite a idade de uma pessoa: \n");
    scanf("%i", &idade);

    if (idade >= idadei)
    {
        printf("A idade informada é de uma pessoa idosa\n");
    }else{
        if(idade <=idadej){
            printf("A Idade informada é de uma pessoa jovem");
        }else{
            if(idade>idadej || idade<idadei)//&& verifica se as duas expressões são verdadeiras || também serve para verificar se uma delas é verdadeira e entrar no bloco de instruções
            {
                printf("A idade informada é de uma pessoa de meia idade");
            }
        }
    }

    return 0;
}