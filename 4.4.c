#include <stdio.h>
#include <math.h>
int main(void)
{

  float  y;
  float x = 0;//a
  float b = 3.14;
  float dx = 3.14 / 20;
  printf("\n******************\n");
  printf("*X\t\tY*\n");
  printf("******************\n");
  while (x <= b)
  {
    y = pow(sqrt(tan(x) + 13), 1 / 4.0);
    printf (" %f\t%9.2lf\n", x, y);
    x += dx;
  }
  return 0;
}
