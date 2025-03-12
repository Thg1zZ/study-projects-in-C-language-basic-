//Projeto nota//
#include<stdio.h>
#include<stdlib.h>

int main()
{

    float nota1, nota2,notaFinal, media;

    printf("Digite a primera nota: ");
    scanf ("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf ("%f", &nota2);
    notaFinal= (nota1+nota2);
    printf ("Nota Total: %0.1f", notaFinal);
    printf ("\n");
    media=(nota1+nota2)/2;
    printf ("A sua media e:%0.2f \n",media );
    if(media>60)
    {
        printf ("Aprovado por media:%0.2f", media);
    }
    else
    {
        printf ("REPROVADO");


    }


}
