#include <stdio.h>

int main(void)
  {
  
  float n;
  int x, i, j, s;
  int sum = 0;
  printf ("\r\nВведіть ціле число\r\n\n x = ");
  scanf ("%d", &x);
  printf ("\r\nВведіть натуральне число\r\n\n n = ");
  scanf ("%f", &n);
  
  
  for (i = 1; i < n; i ++ )
  {
    for (s = 1, j = i; j < 5; j++) 
    s += (x + 2 * i) / j;
      sum += s;
  }
  printf("\r\n sum= %d\r\n",sum);
  
  return 0;
  }
