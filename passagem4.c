#include <stdio.h>
int main()

{
int origem;
int destino;
do
{
printf("\n Ola, meu nome e Luiza, qual a sua origem (1-Rio/2-SP/3-SSA)?\n");
scanf("%d",&origem);

	switch(origem)
    	{
        case 1:
        	printf("\n Entendi, Rio de Janeiro. Qual o seu destino (1-Rio/2-SP/3-SSA)?\n");
            scanf("%d", &destino);
            
				
				if(destino==1)
				do
					{
						printf("\nOps!! Seu destino não pode ser o mesmo que a origem. Qual é seu destino (1-Rio/2-SP/3-SSA)?\n");
						scanf("%d", &destino);
					}while(destino==1);	
					
				else
				
				if(destino==2)
					{
						printf("\nEntendi, Sao Paulo! \n Valor para passagem Rio de Janeiro -> Sao Paulo: \n R$ 150,00 ou $%f \nObrigado e boa viagem! \n", (float)150.00/3.40);
					}   
				else
				{
					if(destino==3)
					{
        				printf("\nEntendi, Salvador! \n Valor para passagem Rio de Janeiro -> Salvador: \n R$ 300,00 ou $%f \nObrigado e boa viagem! \n", (float)300.00/3.40);
					}
				
				}          			
		break;	
		
		case 2:
        	printf("\n Entendi, Sao Paulo. Qual o seu destino (1-Rio/2-SP/3-SSA)?\n");
            scanf("%d", &destino);
            
            	if(destino==2)
            	do
					{
						printf("\nOps!! Seu destino não pode ser o mesmo que a origem. Qual é seu destino (1-Rio/2-SP/3-SSA)?\n");
						scanf("%d", &destino);
					}while(destino==2);	
				else
            
				if(destino==1)
					{
						printf("\nEntendi, Rio de Janeiro! \n Valor para passagem Sao Paulo -> Rio de Janeiro: \n R$ 160,00 ou $%f \nObrigado e boa viagem! \n", (float)160.00/3.40);
					}   
				else
				{
					if(destino==3)
					{
        				printf("\nEntendi, Salvador! \n Valor para passagem Sao Paulo -> Salvador: \n R$ 180,00 ou $%f \nObrigado e boa viagem! \n", (float)180.00/3.40);
					}
				}          			
		break;	
		
		case 3:
        	printf("\n Entendi, Salvador. Qual o seu destino (1-Rio/2-SP/3-SSA)?\n");
            scanf("%d", &destino);
            
            	if(destino==3)
                do
                
					{
						printf("\nOps!! Seu destino não pode ser o mesmo que a origem. Qual é seu destino (1-Rio/2-SP/3-SSA)?\n");
						scanf("%d", &destino);
					}while(destino==3);	
				else
            
				if(destino==1)
					{
						printf("\nEntendi, Rio de Janeiro! \n Valor para passagem Salvador -> Rio de Janeiro: \n R$ 280,00 ou $%f \nObrigado e boa viagem! \n", (float)280.00/3.40);
					}   
				else
				{
					if(destino==2)
					{
        				printf("\nEntendi, Sao Paulo! \n Valor para passagem Salvador -> Sao Paulo: \n R$ 175,00 ou $%f \nObrigado e boa viagem! \n", (float)175.00/3.40);
					}
				}          			
		break;	
		}  	
}while(origem==destino);
        return(0);
}   
          				
						
	
