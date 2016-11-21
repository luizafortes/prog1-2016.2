#include <stdio.h>
int main()
{
    int num;
    printf("Entre com um numero de 1 a 3:\n");
    scanf("%d",&num);
    switch(num)
    {
        case 1:
            printf("\nOpcao 1 escolhida!\n");
            break;
        case 2:
            printf("\nOpcao 2 escolhida!\n");
            break;
        case 3:
            printf("\nOpcao 3 escolhida!\n");
            break;
        default:
            printf("\nOpcao invalida!\n");

        }
        system("pause");
        return 0;
    }
