#include <stdio.h>

int main()
{
    float soma=0, media;  
    float av1 [10];
    int i;
         
  for(i=0;i<=9;i++)
  {
    printf("Entre com av1 do aluno %d : ", i+1);
    scanf("%f", &av1[i]);
    soma=soma+av1[i];
    
  }
    media=soma/10;
    printf("\n media = %f \n", media);
  
  printf("\n------------------------------------\n");
  printf("\nAlunos com nota maior ou igual a media\n");
    for(i=0;i<=9;i++)
    {
      if(av1[i] >= media)
      printf("\nAluno %d -> Nota = %f \n", i+1, av1[i]);
    }
  printf("\n------------------------------------\n");
    return 0;
}