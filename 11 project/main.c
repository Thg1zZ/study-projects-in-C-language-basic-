//Problema numeros em vetor primeiro projeto\\ 
#include<stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{

    int n = 0;
    printf("Digite o valor de n:");
    scanf("%d", &n);

    int numeros[n];

    for (int i = 0; i < n; i++)
    {

        printf("Digite os n:");
        scanf("%d", &numeros[i]);
    }

    for (int i = 0; i < n; i++)
    {

        printf("Digite os nomes: %d ", numeros[i]);
    }

    return 0;
}