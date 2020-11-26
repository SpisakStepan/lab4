#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
  
  int s = 0;
  for (int i = 1; i <= 100; i++)
  {

    if (i % 5 == 0)
    s += i;

  }

  printf("Sum=%d", s);
  
  return 0;

}
