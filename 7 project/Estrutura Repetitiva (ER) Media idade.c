#include<stdio.h>
#include<stdlib.h>

int main()
{
    int x, y, soma, troca ;

    printf("Digite dois numeros: ");
    scanf("%d %d", &x, &y);

  troca=0;

  if(y>x){                                       
       troca=x;
       x=y;
       y=troca;

    }
    soma=0;
    for (int i = y+1; i < x; i++){   if(i%2!=0)

        soma=soma+i;
        
    }

    printf("Soma de impares= %d", soma);
    
    
    return 0;
}
