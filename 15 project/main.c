#include <stdio.h>
#include<string.h>

int main()
{
  int n, quantmulheres, quanthomens;
  double alturamulheres, media, maioraltura, menoraltura;
  char nome[50];

  printf("Quantas pessoas serao digitadas? ");
  scanf("%d", &n);

  double altura[n];
  char generos[n];
  

  for (int i = 0; i < n; i++)
  {
    printf("Nome:");
    fgets("%s" &nome[i]);
    printf("Altura da %da  pessoa: ", i + 1);
    scanf("%lf", &altura[i]);
    printf("Genero da %da pessoa: ", i + 1);
    scanf(" %c", &generos[i]);
  }

  maioraltura = altura[0];
  menoraltura = altura[0];

  for (int i = 1; i < n; i++)
  {
    if (altura[i] > maioraltura)
    {

      maioraltura = altura[i];
    }

    if (altura[i] < menoraltura)
    {

      menoraltura = altura[i];
    }
  }

  quanthomens = 0;
  quantmulheres = 0;

  for (int i = 0; i < n; i++)
  {
    if (generos[i] == 'M')

      quanthomens++;

    else
    {

      quantmulheres = quantmulheres + 1;
      alturamulheres = alturamulheres + altura[i];
    }
  }

  media = (alturamulheres / quantmulheres);

  printf("Menor altura: %lf", menoraltura);
  printf("\n Maior altura:%lf ", maioraltura);

  printf("Media das alturas das mulheres= %0.2lf \n ", media);
  printf("Numero de homens:%d ", quanthomens);

  return 0;
}
