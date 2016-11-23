/*Sequencia Fibonacci Multiplicacao*/
#include <stdio.h>

int main()

{
	float a=1, b=2, c;
	int i;
	printf("\n%.0f \n%.0f", a, b);
	
	for(i=0; i<9; i++)
	{
		c=a*b;
		printf("\n%.0f\n\n", c);
		a=b;
		b=c;
	}
	
	return(0);
}