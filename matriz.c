#include <stdio.h>
/*Ler AV1 AV2 e AV3 de 4 Alunos e Gerar um relatório*/
int main()
  
{
  float notas[4][3];
  int i=0, j=0;
  
  for(i=0;i<=3;i++)
  {
    for(j=0;j<=2;j++)
    {
      printf("Entre com a AV%d do Aluno %d: ", j+1, i+1);
      scanf("%f", &notas[i][j]);
    }
  }
  printf("\n| Aluno \t\t\t\t|\t AV1 \t| \tAV2\t | \tAV3\t |\n");
    for(i=0;i<=3;i++)
  {
    printf("\n| Aluno%d | %f | %f | %f |\n|", i+1, notas[i][0], notas[i][1], notas[i][2]);
  }
   
         
  return(0);
}