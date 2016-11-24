<<<<<<< HEAD
/*tabuada de um numero informado pelo usuario*/
#include <stdio.h>

int main()

{
	int num;
	int i=0;
	
	printf("\n------------------------------------------\n");
	printf("Voce quer ver a tabuada de qual numero?\nR: ");
	scanf("%d", &num);
	
	while(i<=9)
	{
		printf("\n%d x %d = %d\n", num, i, i*num, i++);
	}
		printf("\n------------------------------------------\n");
	return(0);
}
=======
/*tabuada de um numero informado pelo usuario*/
#include <stdio.h>

int main()

{
	int num;
	int i=0;
	
	printf("Voce quer ver a tabuada de qual numero?\nR:");
	scanf("%d", &num);
	
	while(i<=9)
	{
		printf("\n%d x %d = %d\n", num, i, i*num, i++);
	}
	return(0);
}
>>>>>>> 45e2ab29c3bb6f16b89d85d39c04b29e67ff976b
