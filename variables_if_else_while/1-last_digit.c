#include <stdlib.h>
#include <time.h>
#include <studio.h>
/**
 * more headers goes there 
 *
 *betty style doc for function main goes there
 */
int main(void)
{
  int n;

  srand(time(0));
  n = rand() - RAND_MAX / 2;
  if(n[-1] > 5)
    printf("Last digit of %d and is greater than 5",n);
  if(n[-1] == 0) 
    printf("Last digit of %d and is 0",n);
  if(n[-1] < 6 && n != 0)
    printf("Last digit of %d and is less than 6 and not 0",n);
  return (0);
}
