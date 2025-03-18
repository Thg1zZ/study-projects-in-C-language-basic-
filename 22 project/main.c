#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int n, a, c;
    double somaPositivo;

    printf("Qual eh a ordem da matriz? ");
    scanf("%d", &n);

    double mat[n][n];

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            printf("Elemento [%d][%d]:", i, j);
            scanf("%lf", &mat[i][j]);
        }
    }
    somaPositivo = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (mat[i][j] > 0){

                somaPositivo = somaPositivo + mat[i][j];
            }
        }
    }

    printf("Soma de positivos:%0.1lf \n", somaPositivo);
    printf("Escolha a linha:");
    scanf("%d", &a);

    printf("Linha escolhida: ");

    for (int i = 0; i < n; i++){
        if (i == a){
         for (int j = 0; j < n; j++){
                printf("%0.1lf ", mat[i][j]);
            }
        }
    }

    printf("\nEscolha uma coluna:");
    scanf("%d", &c);

    printf("Linha escolhida:");
    for (int j = 0; j < n; j++){
        if (j == c){
            for (int i = 0; i < n; i++){

                printf("%0.1lf ", mat[i][j]);
            }
        }
    }
    printf("\nDiagonal Principal: ");

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (i == j){
                printf("%0.1lf ", mat[i][j]);
            }
        }
    }

    printf("\nMATRIZ ALTERADA\n");

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (mat[i][j] < 0){
                mat[i][j] = pow(mat[i][j], 2);
            }
        }
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){

            printf("%0.1lf ", mat[i][j]);
        }
         
        printf("\n");
    }
    return 0;
}
