#include <stdio.h>
/*
Fazer um programa em C para exibir os numeros pares de 0 a 50
*/

int main()

	{
        int num;
        int maior=-1;
        int menor=99999999999999999999;
        int resposta;
        do
        {
            printf("diga um numero");
            scanf("%d", &num);
            if(num > maior)
                {
                    maior=num;
                }
        printf("\ndeseja continuar (0-s/1-n)?");
        scanf("%d", &resposta);

        }while(resposta==0);
        
        printf("\nMaior numero lido = %d\n", maior);


         printf("\n---------\n");
        system("pause");
        return 0;

	}
