#include <stdio.h>
//ainda esta errado!!! Quem souber acerta ai e compartilha
//nao esta funcionando.
int main()
{
  int num, a=0, b=0, c=0, i=1;
  
  scanf("%d", &num);
  
  a=num;
  b=num-i;
  for ( i=1;b>=1; i++)
  {
    c=a*(b);
    c=a;
  }
  
  printf("fat(%d)=%d\n\n", num, c);
  return 0;
}