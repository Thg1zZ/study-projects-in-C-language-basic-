#include <stdio.h>
#include <stdlib.h>

int main()
{
    int l, c;
    double valoresDesoma;

    printf("Qual a quantidades de linhas da matriz? ");
    scanf("%d", &l);
    printf("Qual a quantidades de colunas da matriz? ");
    scanf("%d", &c);

    double matriz[l][c];

    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Digite o valor da linha[%d]", i + 1);
            scanf("%lf", &matriz[i][j]);
        }
    }
    double vet1[l];

    for (int i = 0; i < l; i++)
    {
        valoresDesoma = 0;
        for (int j = 0; j < c; j++)
        {
            valoresDesoma = valoresDesoma + matriz[i][j];
        }

        vet1[i] = valoresDesoma;
    }

    for (int i = 0; i < l; i++)
    {
        printf("Valor de vetores %0.1lf \n", vet1[i]);
    }

    return 0;
}
