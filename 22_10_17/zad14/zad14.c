#include <stdio.h>
#include <math.h>

int main()
{

  int a, b, c;
  printf("Podaj liczbę a:");
  scanf("%d", &a);
  printf("Podaj liczbę b:");
  scanf("%d", &b);
  printf("Podaj liczbę c:");
  scanf("%d", &c);
  double ab=(a*a+b*b);
  double cc=pow(c, 2);
    if(ab==cc)
      {
        printf("Liczby a, b i c tworzą trójkę pitagorejską.\n");
      }
    else
      {
        printf("Liczby a, b i c nie tworzą trójki pitagorejskiej.\n");
      }
 return 0;
}
