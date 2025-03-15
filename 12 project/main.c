#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, cont = 0;

    printf("Quantos numeros voce vai digitar?");
    scanf("%d", &n);

    int numeros[n];

    for (int i = 0; i < n; i++)
    {

        printf("Digite um numero ");
        scanf("%d", &numeros[i]);
    }

    printf("NUMEROS PARES: \n");

    for (int i = 0; i < n; i++)
    {
        if (numeros[i] % 2 == 0)
        {

            printf("%d \n", numeros[i]);

            cont++;
        }
    }

    printf("Quantidade de pares: %d", cont);

    return 0;
}
