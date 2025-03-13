// Projeto Salario//

#include <stdio.h>
#include <stdlib.h>

int main()
{

    float salario, porcentagem, novoSalario, aumento;

    printf("Digite o salario da pessoa: ");
    scanf("%f", &salario);

    if (salario < 1000.0)
    {

        (porcentagem = 20);
    }
    else if (salario < 3000.0)
    {

        (porcentagem = 15);
    }
    else if (salario < 8000.0)
    {

        (porcentagem = 10);
    }
    else
    {

        (porcentagem = 5);
    }

    aumento = (salario * porcentagem) / 100;
    novoSalario = salario + aumento;

    printf("O aumento foi de: %0.2f reais \n", aumento);
    printf("A porcentagem foi de: %0.0f%%\n", porcentagem);
    printf("Novo Salario e: %0.2f reais ", novoSalario);
}
