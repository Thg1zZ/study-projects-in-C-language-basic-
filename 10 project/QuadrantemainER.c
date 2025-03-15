//Projeto coordenadas \\ 
#include<stdio.h>
#include <stdlib.h>

int main()
{

    float x, y;

    printf("Escreva o valor de X: ");
    scanf("%f", &x);
    printf("Escreva o valor de Y: ");
    scanf("%f", &y);

    while (x != 0 && y != 0)
    {
        if (x > 0 && y > 0)
        {
            printf("Q1 \n");
        }
        else if (x < 0 && y > 0)
        {

            printf("Q2 \n");
        }
        else if (x < 0 && y < 0)
        {

            printf("Q3 \n");
        }
        else if (x > 0 && y < 0)
        {
            printf("Q4 \n");
        }

        printf("Digite os valores das coordenadas: \n");
        scanf("%f", &x);
        scanf("%f", &y);
    }
}