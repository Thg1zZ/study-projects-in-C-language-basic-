#include <stdio.h>
#include <stdlib.h>

int main()
{
    int linha, coluna;

    printf("digite a quantidade de linhas: ");
    scanf("%d", &linha);
    printf("digite a quantidade de coluna: ");
    scanf("%d", &coluna);

    int mat[linha][coluna];

    for (int i = 0; i < coluna; i++)
    {
        for (int j = 0; j < linha; j++)
        {

            printf("Digite o valor dos elementos da matriz: [%d] [%d] ", i, j);

            scanf(" %d", &mat[i][j]);
        }
    }
    printf("\n Matriz informadas:");

    for (int i = 0; i < coluna; i++)
    {
        for (int j = 0; j < linha; j++)
        {

            printf("%d\t ", mat[i][j]);
        }

        return 0;
    }
}
