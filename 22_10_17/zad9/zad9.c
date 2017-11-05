#include <stdio.h>
#include <math.h>

int main()
{

  printf("Podaj liczbe: ");
  double a;
  scanf("%lf", &a);
  printf("Podaj druga liczbe: ");
  double d;
  scanf("%lf", &d);
  double c= pow(a, d);
  double b=sqrt(a);
  double e=fabs(a);
  printf("Pierwiastek z pierwszej liczby to: %lf\n", b);
  printf("Pierwsza liczba do potegi liczby drugiej: %lf\n", c);
  printf("Wartosc bezwzgledna pierwszej liczby to: %lf\n", e);
  return 0;
}
