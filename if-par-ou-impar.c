#include <stdio.h>
/*
Faca um programa em C para ler um numero inteiro e dizer se este e par ou impar.
*/
int main()

{
	
	int numero; 
	
	printf("Diga um numero\n"); 
	scanf("%d", &numero); // decimal inteiro= "%d"	 
	
	if( (numero%2)==0 )
	{
	printf("Numero Par!!")	;
	}
	else
	{
	printf("Numero Impar");
	}
		
	return 0;	
}
