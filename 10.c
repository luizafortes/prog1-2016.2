#include <stdio.h>

/*Dizer o maior de 3 numeros*/

int main()

{
	int maior=-1;
	int num;
	int i=1;
	
	while(i<=3)
		{
			printf("diga um numero:", i++);
			scanf("%d", &num);
				if(num>maior)
				{
					maior=num;
				}
		}	
		printf("O maior numero e:%d", maior);
	return;
}
