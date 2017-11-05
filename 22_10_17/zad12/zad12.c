#include <stdio.h>
#include <math.h>

int main()
{
  double a;
  printf("Podaj liczbę rzeczywistą: ");
  scanf("%lf", &a);
  double b= sqrt(a);
  double c= 1/a;
  if(a>0)
  {
  printf("Pierwiastek kwadratowy podanej liczby to: %lf \n", b);
  printf("Liczba odwrotna do podanej liczby to: %lf\n", c);
  }
  else
  {
  printf("Nie można wyznaczyć pierwiastka kwadratowego z liczby ujemnej- program się wyłączy.\n");
  return 1;
  }
  return 0;
}
