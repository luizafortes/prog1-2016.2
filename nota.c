#include <stdio.h>
/*
Fazer um programa em C para exibir os numeros pares de 0 a 50
*/

int main()

	{
        int cont;
        cont=0;
        do {
            printf("%d - ", cont) ;
            cont=cont+1;
        } while (cont<=50);



        system("pause");
        return 0;

	}
