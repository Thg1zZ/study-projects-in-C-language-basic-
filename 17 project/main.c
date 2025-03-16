#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n, quantNegativa;

    printf("Qual é a ordem das matrizes?");
    scanf("%d", &n);

    int mat[n][n];

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n; j++)
        {
            printf("Elemento [%d] [%d]", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
    printf("Diagonal Principal \n");

    for (int i = 0; i < n; i++)
    {

        printf("%d ", mat[i][i]);
    }
    quantNegativa = 0;

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n; j++)
        {
            if (mat[i][j] < 0)
            {

                quantNegativa++;
            }
        }
    }

    printf("\n Quantidade negativas:%d ", quantNegativa);

    return 0;
}