#include <stdio.h>

int main ()
{
  char letra;
    printf("\nEntre com uma letra:\n");
    scanf("%c", &letra);
  
  if( (letra<91) && (letra>64))
	
	{
	printf("\nMaiuscula\n\n")	;
	}
		
	else
	{
		if((letra>=48) && (letra<=57))
	
	{
	printf("\nVocê digitou um numero\n\n")	;
	}
		else
	printf("\nMinuscula\n\n");
	}
	system("pause");
  return(0); 
}
