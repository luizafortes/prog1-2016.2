#include <stdio.h>
#include <string.h>

int main ()

{
char palavra[20];
int i, tam;
  printf("\nDiga uma palavra de ate 10 caracteres:\nR: ");
  scanf("%s", palavra);
  
  tam=strlen(palavra);
  
  printf("\nPalavra invertida:\n");
   
 for (i=tam;i>=0;i--)
 {
   printf("%c", palavra[i]);
 }
printf("\n");
return(0);
}