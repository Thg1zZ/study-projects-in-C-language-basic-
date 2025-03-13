// Estrutura Repetitiva (ER) Media idade//

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade, soma, cont;
    float media;

    soma = 0;
    cont = 0;

    printf("Digite as idades: ");
    scanf("%d", &idade);

    while (idade >= 0)
    {

        soma = (soma + idade);
        cont++;
        printf("Digite a proxima idade:");
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
