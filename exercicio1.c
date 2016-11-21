#include <stdio.h>
/*
Faça um programa em C para:
Ler 2 números e imprimir a soma dos 2 numeros
*/
int main()

	{
	// criar (declara) variaveis
	int numero1; 
	int numero2;
	
			
	printf("Diga um numero de 1 a 10!\n"); //pergunta 1
	
	scanf("%d", &numero1);	//resposta 1
	
	printf("Diga outro numero de 1 a 10!\n"); //pergunta 2
	
	scanf("%d", &numero2);	//resposta 2
		
	printf("\n A soma dos numeros e = %d ", numero1 + numero2); //soma
	
	printf("\n A diferenca dos numeros e = %d ", numero1 - numero2); //subtracao
	
	printf("\n O produto dos numeros e = %d ", numero1 * numero2); //multiplicação
	
	printf("\n A divisao dos numeros e = %.2f \n", (float) numero1 / numero2); //divisão
	
	system("pause");	
	return 0;
	}
