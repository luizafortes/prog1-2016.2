#include <stdio.h>
/*
Faça um programa em C para ler um número inteiro e dizer se este é par ou ímpar.
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
	system("pause");
	
	return 0;	

	}
