#include <stdio.h>
int main()
{
    int num, num1, num2, resposta;
    do {

        printf("\nQual operacao deseja?\n1-adicao\n2-subtracao\n3-multiplicacao\n4-divisao\n");
        scanf("%d",&num);
        printf("\nEntre com num1:");
        scanf("%d",&num1);
        printf("\nEntre com num2:");
        scanf("%d",&num2);
        switch(num)
        {
        case 1:
            printf ("\nResposta : %.2f \n", (float)(num1 + num2);
            break;
        case 2:
            printf ("\nResposta = %.2f \n", (float)num1 - num2);
            break;
        case 3:
            printf ("\nResposta = %.2f \n", (float)num1 * num2);
            break;
        case 4:
            printf ("\nResposta = %.2f \n", (float)num1 / num2);
            break;
            }
                printf("\ndeseja continuar (1-s/2-n)?");
                scanf("%d", &resposta);
        }while(resposta==1);
        
        return(0);
    }

