<<<<<<< HEAD
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
=======
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
>>>>>>> 45e2ab29c3bb6f16b89d85d39c04b29e67ff976b
