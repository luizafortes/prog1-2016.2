#include <stdio.h>
/*Ler AV1 AV2 e AV3 de 4 Alunos e Gerar um relatório*/
int main()
  
{
  float notas[3][3], media, av1, av2, av3;
  int i=0, j=0, mat;
 
  
  for(i=0;i<=2;i++)
  {
    for(j=0;j<=2;j++)
    {
      printf("Entre com a AV%d do Aluno %d: ", j+1, i+1);
      scanf("%f", &notas[i][j]);
    }
  }
  
  
  //gerar relatorio
  printf("\n1-Resultado do Semestre\n");
  printf("\n-------------------------------------------------------------------");
  printf("\nNome\t\tAV1\t\tAV2\t\tAV3\n");
  printf("\n-------------------------------------------------------------------");
    for(i=0;i<=2;i++)
  {
    printf("\nAluno%d\t\t%.2f\t\t%.2f\t\t%.2f\n", i+1, notas[i][0], notas[i][1], notas[i][2]);
  }
   printf("\n-------------------------------------------------------------------\n"); 
  
  //gerar relatorio da AV1
  printf("\n2-Resultado do Semestre\n");
  printf("\n-------------------------------------------------------------------");
  printf("\nNome\t\tAV1\n");
  printf("\n-------------------------------------------------------------------");
    for(i=0;i<=2;i++)
  {
    printf("\nAluno%d\t\t%.2f\n", i+1, notas[i][0]);
  }
   printf("\n-------------------------------------------------------------------");
  
  printf("\nEntre com sua matricula:");
  scanf("%d", &mat);
  
  //Por Aluno
  printf("\n1-Resultado do Semestre\n");
  printf("\n-------------------------------------------------------------------");
  printf("\nNome\t\tAV1\t\tAV2\t\tAV3\t\tMedia\n");
  printf("\n-------------------------------------------------------------------");
  
    i=mat-1;
    av1=notas[i][0];
    av2=notas[i][1];
    av3=notas[i][2];
  
  if(av1>=av2&&av1>=av3)// av1 eh a maior
  {
    if(av2>av3)
    {
      media=(av1+av2)/2;
    }
    else{
      media=(av1+av3)/2;
    }    
  }
  else if(av2>av3)// av2 e maior
  {
     if(av1>av3)
    {
      media=(av2+av1)/2;
    }
    else{
      media=(av2+av3)/2;
    } 
  }
  
  else if(av1>av2)// av3 e maior
  {
    media=(av3+av1)/2;
  }
  else{
    media=(av3+av2)/2;
  }
  
  if(media>=6)    
  {
    printf("\nAluno%d\t\t%.2f\t\t%.2f\t\t%.2f\t\t%.2f\t Aprovado\n", i+1, notas[i][0], notas[i][1], notas[i][2], media);
  }
     
   else
  {
    printf("\nAluno%d\t\t%.2f\t\t%.2f\t\t%.2f\t\t%.2f\t Reprovado\n", i+1, notas[i][0], notas[i][1], notas[i][2], media);
  }
   printf("\n-------------------------------------------------------------------\n"); 
  

 
         
  return(0);
}