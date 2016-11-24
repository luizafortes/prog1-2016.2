#include <stdio.h>
/*
Faça um programa em C para:
Ler base e altura e calcular a area de um triangulo retangulo
area=(base*altura)/2
*/
int main()

	{
	// criar (declara) variaveis
	int lado1; 
	int lado2;
	
			
	printf("Qual o lado 1 do triangulo?\n"); //pergunta 1
	
	scanf("%d", &lado1);	//resposta 1
	
	printf("Qual o lado 2 do triangulo?\n"); //pergunta 2
	
	scanf("%d", &lado2);	//resposta 2
		
	printf("\n A area do triangulo e = %.2f \n", (float)(lado1 * lado2)/2); //divisão
	
	system("pause");	
	return 0;
	}
