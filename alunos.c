#include <stdio.h>

int main ()

{
  int i, qtd=0;
  float nota[5];
  float soma=0, media=0;
  printf("Entre com as notas dos alunos:\n");
  
  for(i=0;i<5;i++)
  {
    printf("Aluno %d: \n", i+1);
    scanf("%f", &nota[i]);
    soma=soma+nota[i];
  }
  media=soma/5;
  printf("\nmedia = %.2f\n", media);

  for(i=0;i<5;i++)
  {
    if(nota[i]>media)
    {
      qtd++;
    }
  }
  
  if(qtd==1)
      printf("\n%d aluno tirou nota acima da media da turma\n\n", qtd);
  
  
      printf("\n%d alunos tiraram nota acima da media da turma\n\n", qtd);
  
 
    
  return 0;
}