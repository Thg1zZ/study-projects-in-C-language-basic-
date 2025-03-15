#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    printf("Quantos valores vai ter cada vetor? ");
    scanf("%d", &n);

    int vetorA[n];

    printf("Digite os valores do vetor A: \n ");

    for (int i = 0; i < n; i++)
    {

        scanf("%d", &vetorA[i]);
    }

    int vetorB[n];
    printf("Digite os valores do vetor B: \n ");

    for (int i = 0; i < n; i++)
    {

        scanf("%d", &vetorB[i]);
    }
    int vetorC[n];
    for (int i = 0; i < n; i++)
    {

        vetorC[i] = (vetorA[i] + vetorB[i]);
    }

    printf("\nVETOR RESULTANTE \n");

    for (int i = 0; i < n; i++)
    {

        printf("%d \n", vetorC[i]);
    }

    return 0;
}
