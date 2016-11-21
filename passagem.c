#include <stdio.h>
int main()

{
int origem;
int destino;

printf("\n Ola, meu nome e Luiza, qual a sua origem (1-Rio/2-SP/3-SSA)?\n");
scanf("%d",&origem);

	switch(origem) /*Origem*/
    	{
        case 1:
        	printf("\n Entendi, Rio de Janeiro. Qual o seu destino (1-Rio/2-SP/3-SSA)?\n");
            scanf("%d", &destino);
            
				do
					{
						printf("Ops!! Seu destino não pode ser o mesmo que a origem. Qual é seu destino (1-Rio/2-SP/3-SSA)?");
						scanf("%d", &destino);
					}while(destino==1);	
				
				if(destino==2)
					{
						printf("Entendi, Sao Paulo! \n Valor para passagem Rio de Janeiro -> Sao Paulo: \n R$ 150,00");
					}   
				else
				{
					if(destino==3)
					{
        				printf("Entendi, Salvador! \n Valor para passagem Rio de Janeiro -> Salvador: \n R$ 300,00");
					}
				}          			
		break;	
		
		case 2:
        	printf("\n Entendi, Sao Paulo. Qual o seu destino (1-Rio/2-SP/3-SSA)?\n");
            scanf("%d", &destino);
            	do
					{
						printf("Ops!! Seu destino não pode ser o mesmo que a origem. Qual é seu destino (1-Rio/2-SP/3-SSA)?");
						scanf("%d", &destino);
					}while(destino==2);	
            
				if(destino==1)
					{
						printf("Entendi, Rio de Janeiro! \n Valor para passagem Sao Paulo -> Rio de Janeiro: \n R$ 160,00");
					}   
				else
				{
					if(destino==3)
					{
        				printf("Entendi, Salvador! \n Valor para passagem Sao Paulo -> Salvador: \n R$ 180,00");
					}
				}          			
		break;	
		
		case 3:
        	printf("\n Entendi, Salvador. Qual o seu destino (1-Rio/2-SP/3-SSA)?\n");
            scanf("%d", &destino);
                do
					{
						printf("Ops!! Seu destino não pode ser o mesmo que a origem. Qual é seu destino (1-Rio/2-SP/3-SSA)?");
						scanf("%d", &destino);
					}while(destino==3);	
            
				if(destino==1)
					{
						printf("Entendi, Rio de Janeiro! \n Valor para passagem Salvador -> Rio de Janeiro: \n R$ 280,00");
					}   
				else
				{
					if(destino==3)
					{
        				printf("Entendi, Sao Paulo! \n Valor para passagem Salvador -> Sao Paulo: \n R$ 175,00");
					}
				}          			
		break;	
		}  	

        return(0);
}   
          				
						
	
