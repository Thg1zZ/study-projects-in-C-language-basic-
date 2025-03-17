#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n;

    printf("Qual a ordem das matrizes?");
    scanf("%d", &n);

    int mat[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {

            printf("Elemento:[%d][%d]", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    printf("MAIOR ELEMENTO DE CADA LINHA \n");

    for (int i = 0; i < n; i++)
    {
        int maiorvalor = mat[0][0];

        for (int j = 0; j < n; j++)
        {
            if (mat[i][j] > maiorvalor)
            {
                maiorvalor = mat[i][j];
            }
        }

        printf("%d \n", maiorvalor);
    }

    return 0;
}
