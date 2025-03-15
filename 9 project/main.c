//Projeto senha\\ 

#include <stdio.h>
#include <stdlib.h>

int main()
{

	int senha;

	printf("Digite sua senha: ");
	scanf("%d", &senha);

	while (senha != 2002)
	{

		printf("Senha errada tente novamente \n");

		scanf("%d", &senha);
	}

	printf("Acesso permitido!");

	return 0;
}