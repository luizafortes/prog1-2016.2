/*
Luiza Rivello de Moura Fortes
Matricula: 0050014555
*/
#include <stdio.h>

int main() 

{
  int i, j, m; 
  int matA[50][50], matB[50][50], matR[50][50];
    
  printf("\nMultiplicacao de 2 matrizes\n............................\n\n");
  
    printf("\nMatriz A (2 linhas | 3 colunas)\n.........................................\n\n");
    for (i=0; i<2; i++) {
      for(j=0; j<3; j++) {
        printf("Entre com um numero para Linha [%d] Coluna [%d].: ", (i+1), (j+1));
        scanf("%d", &matA[i][j]);
      }
    }
    printf("\nMatriz B (3 linhas | 2 colunas)\n..................................\n\n");
    for (i=0; i<3; i++) {
      for (j=0; j<2; j++) {
        printf("Entre com um numero para Linha [%d] Coluna [%d].: ", (i+1), (j+1));
        scanf("%d", &matB[i][j]); 
      }
    }
    for (i=0;i<2; i++) {
      for (j=0; j<2; j++) {
        for (m=0; m<3; m++) {
          matR[i][j] = matR[i][j] + (matA[i][m] * matB[m][j]); 
 
        }
      }
    }
    printf("\nMatriz R - Resultado da Multiplicacao\n..................................\n\n");
    for (i=0; i<2; i++) {
      for (j=0; j<2; j++) {
        printf("%d ", matR[i][j]);
      }
      printf("\n");
    }
  printf("\n");
  return(0);  
}
