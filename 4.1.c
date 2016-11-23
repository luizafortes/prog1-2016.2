#include <stdio.h>

int main()

{
	float a=0, b=1, c;
	int i;
	printf("\n%.0f \n%.0f", a, b);
	
	for(i=0; i<100; i++)
	{
		c=a+b;
		printf("\n%.0f", c);
		a=b;
		b=c;
	}
	
	return(0);
}
