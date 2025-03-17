#include<stdio.h>
#include <stdlib.h>

int main()
{

    int n = 0;
    printf("Quantos numeros ira digitar?");
    scanf("%d", &n);

    int numeros[n];

    for (int i = 0; i < n; i++)
    {
        printf("Digite os n:");
        scanf("%d", &numeros[i]);
    }

    printf("\nNUMEROS NEGATIVOS: \n");

    for (int i = 0; i < n; i++)
    {if(numeros[i]<0)

        printf("%d \n", numeros[i]);
    }

    return 0;
}
