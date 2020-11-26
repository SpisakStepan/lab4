#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
  
  int s = 0, i = 1;
  do
  {
    
    if (i % 5 == 0) 
    s += i;
    i++;
  } while (i <= 100);

  printf("Sum=%d", s);
  return 0;
}
