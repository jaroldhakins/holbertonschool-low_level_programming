#include <stdio.h>

/**
 * main - Imprime los numeros del 1 al 100
 * En caso de que el numero sea multiplo de 3 imprime fizz
 * En caso de que sea multiplo de 5 imprime FizzBuzz.
 *
 * Return: 0
 */

int main()
{
int i;

for (i = 1; i <= 100; i++)
{
if (i % 3 == 0)
{
printf("Fizz ");
}
else if (i % 5 == 0)
{
printf("Buzz ");
}
else if (i % 3 == 0 && i % 5 == 0)
{
printf("FizzBuzz ");
}
else
{
printf("%i ",i);
}
}
printf("\n");

return (0);
}
