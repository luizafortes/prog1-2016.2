#include <stdio.h>
/*
Fazer um programa em C para exibir os numeros pares de 0 a 50
*/

int main()

	{
        int cont;
        
        printf("inicio da contangem\n");
        
        for(cont=0; cont<=50; cont=cont+2)
        
        {
        printf("\n %d \n", cont);
        }
        
        printf("\n fim da contagem\n\n");
         
        system ("pause");
        

        return 0;

	}
