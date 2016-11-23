/*Sequencia Fibonacci Soma*/
#include <stdio.h>

int main()

{
	float a=0, b=1, c;
	int i;
	printf("\n%.0f \n%.0f", a, b);
	
	for(i=0; i<9; i++)
	{
		c=a+b;
		printf("\n%.0f\n\n", c);
		a=b;
		b=c;
	}
	
	return(0);
}