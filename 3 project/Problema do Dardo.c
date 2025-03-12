//Projeto  do dardo//

#include<stdio.h>
#include<stdlib.h>



int main(){

    float d1, d2, d3, maior;

    printf("Escreva a Primeira Distancia: \n");
    scanf("%f",&d1);
    printf ("Escreva a Segunda Distancia: \n");
    scanf ("%f",&d2);
    printf ("Escreva a terceira Distancia: \n");
    scanf ("%f",&d3);

    if(d1>d2 && d1>d3){
        (maior=d1);
     }

     else if (d2>d1 && d2>d3){

        (maior =d2);

     }
     else {

        (maior=d3);
     }

     printf("Maior Distancia: %0.2f", maior);
















}
