//Projeto Calculo \\ 

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade, soma, cont;
    float media;

    soma = 0;
    cont = 0;

    printf("Digite a primera  idade: ");
    scanf("%d", &idade);

    while (idade >= 0)
    {

        soma = (soma + idade);
        cont++;
        printf("Digite as proximas idade:");
        scanf("%d", &idade);
    }
    if (cont == 0)
    {
        printf("Impossivel calcular");
    }
    else
    {
        media = (float)soma / cont;
        printf("Media= %0.2f ", media);
    }

    return (0);
}
