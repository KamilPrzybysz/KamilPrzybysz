#include <stdio.h>
#include <math.h>

int main()
{
  int a, b;
  printf("Podaj liczbę a:");
  scanf("%d", &a);
  printf("Podaj liczbę b:");
  scanf("%d", &b);

  if(a>b)
  {
   printf("Największą z tych liczb jest liczba a= %d\n", a);
  }
  else
  {
   printf("Największą z tych liczb jest liczba b= %d\n", b);
  }

  return 0;
}
