#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void limpar_entrada(){
    char c;
    while ((c = getchar()) != '\n' && c != EOF){}
    }

int main(){
    int n = 0;

    printf("Numero de pessoas que serao digitas?");
    scanf("%d", &n);
    
    double altura[n];
    char nome[n][50];

    for (int i = 0; i < n; i++){
        printf("Digite o nome: ");
        limpar_entrada();
        fgets(nome[i], 50, stdin);
        strtok(nome[i],"\n");

        printf("Digite a altura:");
        scanf("%lf", &altura[i]);
    }
   
    double altura1 = 0;
    
    for (int i = 0; i < n; i++){
        if (altura[i] > altura1){
            altura1 = altura[i];
        }
    }
    printf("\nPessoas com a maior altura:\n");
    
    for (int i = 0; i < n; i++){ 
        if (altura1 == altura[i]){
        
            printf("Nome: %s e a pessoa mais alta com %0.2lf", nome[i],altura1);
        }
    }

    return 0;
}
