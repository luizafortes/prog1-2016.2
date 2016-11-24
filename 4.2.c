<<<<<<< HEAD
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
=======
#include <stdio.h>

int main()

{
	float a=1, b=2, c;
	int i;
	printf("\n%.0f \n%.0f", a, b);
	
	for(i=0; i<10; i++)
	{
		c=a*b;
		printf("\n%.0f", c);
		a=b;
		b=c;
	}
	
	return(0);
}
>>>>>>> 45e2ab29c3bb6f16b89d85d39c04b29e67ff976b
