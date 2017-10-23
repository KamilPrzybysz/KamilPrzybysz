#include <stdio.h>
#include <math.h>


int main()
{
  float a, b, c;
  printf("Podaj wartość początkową: ");
  scanf("%f", &a);
  printf("Podaj wartość końcową: ");
  scanf("%f", &b);
  printf("Podaj krok argumentu: ");
  scanf("%f", &c);

  for(int i=1; i<=b; i++)
  {
    float arg= pow(a, 3);
    printf("%.4f %.4f \n", a++, arg);
  }


  return 0;
}
