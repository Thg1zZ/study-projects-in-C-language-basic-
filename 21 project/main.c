#include <stdio.h>
#include <stdlib.h>

int main()
{
    int l, c;
    printf("Digite o valor de linhas:");
    scanf("%d", &l);
    printf("Digite o valor de colunas:");
    scanf("%d", &c);

    int mat1[l][c];
    int mat2[l][c];

    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Elemento:[%d][%d]", i, j);
            scanf("%d", &mat1[i][j]);
        }
    }

    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Elemento:[%d][%d]", i, j);
            scanf("%d", &mat2[i][j]);
        }
    }

    printf("MATRIZ SOMA \n \n");

    for (int i = 0; i < l; i++)
    {
    

        for (int j = 0; j < c; j++)
        {
            int mat3 = mat1[i][j] + mat2[i][j];

            printf("VALOR:%d \n", mat3);
        }
    }

    return 0;
}
