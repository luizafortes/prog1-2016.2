#include <stdio.h>
/*
Transformar um numero decimal em binario
*/
int main()

{
	
	int numero;
	int i=0, resto, result; 
	int bin[10];
	int j;

	printf("Diga um numero decimal:\nR:"); 
	scanf("%d", &numero); // decimal inteiro= "%d"
	
	do{
	result = numero / 2;
	resto = numero %2;
	bin[i] = resto;
	i++;	
	numero=result;
	}while(result!=1);
	bin[i]=1;//ultimo digito
	
 printf("\nConvertido para binario = ");
 for (j=i;j>=0;j--)//transferido para binario
 {
   printf("%d", bin[j]);
 }
	printf("\n________________________________________________________\n");
	return 0;
}
