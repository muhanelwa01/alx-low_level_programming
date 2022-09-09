#include <stdlib.h>
#include <time.h>
/**
 n is a random value 
**/

/**
 *n has a random value each time when executed
 *n can either be positive or negetive
 *if else n is zero
 **/
int main(void) 
{
  int n;
  srand(time(0));
  n = rand() - RAND_MAX / 2;
  /**
    printf("%n=1"positive;"%n=0"zero;"%n=-1"negetive; n++;
 **/
  return (0); 
}
