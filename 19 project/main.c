#include <stdio.h>
#include <stdlib.h>

int main()
{

    int l, c;

    printf("A quantidade de linhas da matriz?");
    scanf("%d", &l);

    printf("A quantidade de colunas da matriz?");
    scanf("%d", &c);

    int mat[l][c];

    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Elemento [%d] [%d]", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
    printf("VALORES NEGATIVO: \n");

    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (mat[i][j] < 0)
            {
                printf("%d \n", mat[i][j]);
            }
        }
    }

    return 0;
}
