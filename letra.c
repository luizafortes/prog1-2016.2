#include <stdio.h>

int main ()
{
  char letra;
    printf("\nEntre com uma letra:\n");
    scanf("%c", &letra);
  
  if( (letra<91) && (letra>64))
	
	{
	printf("\nMaiuscula\n")	;
	}
	else
	{
	printf("\nMinuscula\n");
	}
	system("pause");
  return(0); 
}
