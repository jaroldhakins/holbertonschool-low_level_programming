#include <stdlib.h>
#include <stdio.h>

/**
 * positive_or_negative - me dice si un entero es positivo, negativo o igual a cero
 *
 * Return: no return
 */

void positive_or_negative(void)

{
  int i;

  i = 0;

  if (i > 0)

    {
      printf("%d is positive\n", i);
    }

  else if (i == 0)

    {
      printf("%d is zero\n", i);
    }

  else

    {
      printf("%d is negative\n", i);
    }

}
