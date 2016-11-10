#include <stdio.h>

int main()
{
  char nome[50];
  float av1;
  float av2;
  float media;
  
  printf("Qual o seu nome?");
  scanf("%s", nome);
  
  printf("Entre com AV1:");
  scanf("%f.1", &av1);
  
  printf("Entre com AV2:");
  scanf("%f.1", &av2);
  
  media = ((av1+av2)/2);
  
  printf("\nOla %s, Media = %f.2", nome, media);


return(0);
}