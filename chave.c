#include <stdio.h>

int main()

{
int numero[10];
int i, j, k, r=0;

for (i=0;i<10;i++)
  {
    scanf("%d", &numero[i]);
  }
  
printf("Diga um numero inteiro->");
scanf("%d", &k);

for (i=0;i<10;i++)
  {
    if(k==numero[i])
      r++;  
  }
  if (r>0)
  {printf("\n\nChave encontrada no vetor\n\n");
  }
  else if (r<1)
  {printf("\n\nChave nao encontrada no vetor\n\n");
  }
return 0;
}