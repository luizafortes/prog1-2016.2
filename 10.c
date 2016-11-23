#include <stdio.h>

/*Dizer o maior de 3 numeros*/

int main()

{
	int maior=-1;
	int num;
	int i=1;
	
	while(i<=3)
		{
			printf("\ndiga um numero: ", i++);
			scanf("%d", &num);
				if(num>maior)
				{
					maior=num;
				}
		}	
		printf("\nO maior numero e:%d\n", maior);
	return;
}