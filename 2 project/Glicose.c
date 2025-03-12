//Projeto Glicose//

#include<stdio.h>
#include<stdlib.h>

int main()
{

    float glicose;

    printf("Digite a Medida da Glicose: ");
    scanf ("%f",&glicose);

    if (glicose<=100)
    {
        printf("Classifique:Normal");

    }

    else if(glicose<=140)
    {

        printf("Classificacao:Elevada");
    }


    else
    {

        printf("Classificacao: Diabetes");
    }













}
