#include <stdio.h>
#include <math.h>

int main()
{
  int a;
  int b;
  printf("Podaj pierwsza liczbe:");
  scanf("%d", &a);
  printf("Podaj druga liczbe:");
  scanf("%d", &b);
  int suma= a+b;
  printf("Suma tych liczb to: %d\n", suma);
  int rozn= a-b;
  printf("Roznica tych liczb to: %d\n", rozn);
  int iloczyn= a*b;
  printf("Iloczyn tych liczb to: %d\n", iloczyn);
  int iloraz= a/b;
  printf("Iloraz tych liczb to: %d\n", iloraz);
  int rowne= a==b;
  printf("==: %d\n", rowne);
  int rozne= a!=b;
  printf("!=: %d\n", rozne);
  int mniejsze= a<b;
  printf("<: %d\n", mniejsze);
  int wieksze= a>b;
  printf(">: %d\n", wieksze);
  int mlr= a<=b;
  printf("<=: %d\n", mlr);
  int wlr= a>=b;
  printf(">=: %d\n", wlr);
  int kon= a&&b;
  printf("&&: %d\n", kon);
  int alt= a||b;
  printf("||: %d\n", alt);
  int bit_kon= a&b;
  printf("&: %d\n", bit_kon);
  int bit_alt= a|b;
  printf("|: %d\n", bit_alt);
  int bit_rozn= a^b;
  printf("^: %d\n", bit_rozn);
  int pbl= a<<b;
  printf("<<: %d\n", pbl);
  int pbp= a>>b;
  printf(">>: %d\n", pbp);

  return 0;
}
