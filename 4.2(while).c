#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) 
{
  int s = 0, i = 1;
  while (i <= 100)
  {
    
      if (i % 5 == 0) 
    s += i;
    i++;

  }
  printf("Sum=%d",s);
  
  return 0;
}
