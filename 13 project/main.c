#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n, b;

    printf("Quantos numeros voce ira digitar? ");
    scanf("%d", &n);

    int numeros[n];
    int a = 0;

    for (int i = 0; i < n; i++)
    {

        printf("Digite os numeros: ");
        scanf("%d", &numeros[i]);
        b = numeros[i];

        if (b > a)
        {

            a = b;
        }
    }

    int posicao;

    for (int i = 0; i < n; i++)
    {

        if (numeros[i] == a)
        {
            posicao = i;
        }
    }

    printf("O numero maior e: %d  \n", a);
    printf("Posicao do maior valor: %d", posicao + 1);

    return 0;
}
