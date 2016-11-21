#include <stdio.h>
int main()

{
int origem;
int destino;
float p1=150, p2=300, p3=160, p4=180, p5=280, p6=175, dolar=3.4;


printf("\nOla, meu nome e Luiza, qual a sua origem (1-Rio/2-SP/3-SSA)?\n");
scanf("%d",&origem);

	switch(origem)
	{
/*______________________________Rio de Janeiro_________________________________________*/
case 1:
        	printf("\nEntendi, Rio de Janeiro.\nQual o seu destino (1-Rio/2-SP/3-SSA)?\n");
          	scanf("%d", &destino);
					switch(destino)
					{
							
							case 1:
							do
							{
            				printf("\nOps!! Seu destino não pode ser o mesmo que a origem.\nQual é seu destino (2-SP/3-SSA)?\n");
							scanf("%d", &destino);
							}while(destino==1);
							
								switch(destino)
									{
									case 2:
									printf("\nEntendi, Sao Paulo!\n"); 
									printf("Valor para passagem Rio de Janeiro -> Sao Paulo:\n");
									printf("R$ %.2f ou $ %.2f\n", p1, (p1/dolar));
									printf("Obrigado e boa viagem!\n");
									break;

									case 3:
									printf("\nEntendi, Salvador!\n"); 
									printf("Valor para passagem Rio de Janeiro -> Salvador:\n");
									printf("R$ %.2f ou $ %.2f\n", p2, (p2/dolar));
									printf("Obrigado e boa viagem!\n");
									break;
									}
							break;
							
							case 2:
							printf("\nEntendi, Sao Paulo!\n"); 
							printf("Valor para passagem Rio de Janeiro -> Sao Paulo:\n");
							printf("R$ %.2f ou $ %.2f\n", p1, (p1/dolar));
							printf("Obrigado e boa viagem!\n");
							break;
							
							case 3:
							printf("\nEntendi, Salvador!\n"); 
							printf("Valor para passagem Rio de Janeiro -> Salvador:\n");
							printf("R$ %.2f ou $ %.2f\n", p2, (p2/dolar));
							printf("Obrigado e boa viagem!\n");
							break;
							
					}
					break;
/*_________________________________Sao Paulo_________________________________________*/
case 2:
        	printf("\nEntendi, Sao Paulo.\nQual o seu destino (1-Rio/2-SP/3-SSA)?\n");
          scanf("%d", &destino);
					switch(destino)
					{
							
							case 2:
							do
							{
            	printf("\nOps!! Seu destino não pode ser o mesmo que a origem.\nQual é seu destino (1-Rio/3-SSA)?\n");
							scanf("%d", &destino);
							}while(destino==2);
							
								switch(destino)
									{
									case 1:
									printf("\nEntendi, Rio de Janeiro!\n"); 
									printf("Valor para passagem Sao Paulo -> Rio de Janeiro:\n");
									printf("R$ %.2f ou $ %.2f\n", p3, (p3/dolar));
									printf("Obrigado e boa viagem!\n");
									break;

									case 3:
									printf("\nEntendi, Salvador!\n"); 
									printf("Valor para passagem Sao Paulo -> Salvador:\n");
									printf("R$ %.2f ou $ %.2f\n", p4, (p4/dolar));
									printf("Obrigado e boa viagem!\n");
									break;
									}
							break;
							
							case 1:
							printf("\nEntendi, Rio de Janeiro!\n"); 
							printf("Valor para passagem Sao Paulo -> Rio de Janeiro:\n");
							printf("R$ %.2f ou $ %.2f\n", p3, (p3/dolar));
							printf("Obrigado e boa viagem!\n");
							break;
							
							case 3:
							printf("\nEntendi, Salvador!\n"); 
							printf("Valor para passagem Sao Paulo -> Salvador:\n");
							printf("R$ %.2f ou $ %.2f\n", p4, (p4/dolar));
							printf("Obrigado e boa viagem!\n");
							break;
					}
					break;
/*_________________________________Salvador_____________________________________________*/
case 3:
        	printf("\nEntendi, Salvador.\nQual o seu destino (1-Rio/2-SP/3-SSA)?\n");
          scanf("%d", &destino);
					switch(destino)
					{
							
							case 3:
							do
							{
            	printf("\nOps!! Seu destino não pode ser o mesmo que a origem.\nQual é seu destino (1-Rio/2-SP?)\n");
							scanf("%d", &destino);
							}while(destino==3);
							
								switch(destino)
									{
									case 1:
									printf("\nEntendi, Rio de Janeiro!\n"); 
									printf("Valor para passagem Salvador -> Rio de Janeiro:\n");
									printf("R$ %.2f ou $ %.2f\n", p5, (p5/dolar));
									printf("Obrigado e boa viagem!\n");
									break;
								
									case 2:
									printf("\nEntendi, Sao Paulo!\n"); 
									printf("Valor para passagem Salvador -> Sao Paulo:\n");
									printf("R$ %.2f ou $ %.2f\n", p6, (p6/dolar));
									printf("Obrigado e boa viagem!\n");
									break;
									}
							break;
							
							case 1:
							printf("\nEntendi, Rio de Janeiro!\n"); 
							printf("Valor para passagem Salvador -> Rio de Janeiro:\n");
							printf("R$ %.2f ou $ %.2f\n", p5, (p5/dolar));
							printf("Obrigado e boa viagem!\n");
							break;
							
							case 2:
							printf("\nEntendi, Sao Paulo!\n"); 
							printf("Valor para passagem Salvador -> Sao Paulo:\n");
							printf("R$ %.2f ou $ %.2f\n", p6, (p6/dolar));
							printf("Obrigado e boa viagem!\n");
							break;
					}
					break;
/*_______________________________________________________________________________________*/
		

}
return(0);
}
	