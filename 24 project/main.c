#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void limpar_entrada(){
    char c;
    while ((c = getchar()) != '\n' && c != EOF){}
    }

    int main()
    {   char afirmativo, genero[50];
        char nome [50][50];
        double notas1[50], notas2[50];
        int contador=0;
        
        
        do{
        
        for (int i = 0; i < 50; i++)
        {   
            printf("Nome do aluno: ");
            fgets(nome[i], 50, stdin);
            nome[i][strcspn(nome[i], "\n")] = '\0';

            printf("Digite o genero (M/F): ");
            scanf(" %c", &genero[i]);
    
            printf ("Digite a primeira nota:");
            scanf("%lf", &notas1[i]);
    
            printf("Digite a segunda nota:");
            scanf("%lf", &notas2[i]);
           
           limpar_entrada();   
            
           printf("Se for condinuar digite S se tiver terminado digite N: ");
            scanf(" %c",&afirmativo);

            contador++;

            if (afirmativo=='N'){
                break;
            }

            

            limpar_entrada();


            
        }
    }while (afirmativo=='S');
    



    double media=0;

    for (int i = 0; i <contador ; i++){

        media= (notas1[i] + notas2[i])/2; 

    if (media >=6.0){
            printf("Aluno %s, do genero %c foi aprovado com a media %0.2lf. \n", nome[i],genero[i], media);
        }else {

            printf("Aluno %s, do genero %c foi reprovado com a media %0.2lf. \n", nome[i], genero[i], media);
        }
    }
    
     
    return 0;
    }
    