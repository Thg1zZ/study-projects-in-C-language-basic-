//Projeto Temperatura//

#include<stdio.h>
#include<stdlib.h>

int main()
{
    float C, F;
    char unidade;

    printf("Voce vai digitar a temperatura em qual escala (C/F)?" );
    scanf(" %c", &unidade);

    if (unidade =='F')
    {
        printf("Digite a temperatura em fahrenheit: \n ");
        scanf("%f",&F);

        C=(F-32)/1.8;


        printf("A temperatura equivalente em Celsius:%0.2f ", C);


    }
    else if(unidade=='C')
    {
        printf("Digite a temperatura em Celsius: " );
        scanf("%f",&C);

        F=(C*1.8)+32;




        printf("A temperatura equivalente em fahrenheit:%0.2f ", F);





    }







    return 0;

}
