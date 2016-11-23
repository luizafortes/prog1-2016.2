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