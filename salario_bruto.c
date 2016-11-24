#include <stdio.h>
/*
Faça um programa em C para:
Ler salario_bruto
Calcular e imprimir salario_liq com desconto de 20%
*/
int main()

	{
	float salario_bruto, salario_liq; 
		
	printf("Diga seu salario bruto\n");
	
	scanf("%f", &salario_bruto);
	
	salario_liq = salario_bruto * 0.8;
	
	printf("\n Salario Liquido = %.2f \n", salario_liq);
	
	system("pause");	
	return 0;
	}
