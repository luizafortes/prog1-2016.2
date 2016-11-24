#include <stdio.h>
/*
Faça um programa em C para:
Ler salario_bruto
Calcular e imprimir salario_liq com desconto de 20%
*/
int main()

	{
	int salario_bruto; 
		
	printf("Diga seu salario bruto\n");
	
	scanf("%d", &salario_bruto);
	
	printf("\n Salario Liquido = %.2f \n", (float)salario_bruto * 0.8);
	
	system("pause");	
	return 0;
	}
