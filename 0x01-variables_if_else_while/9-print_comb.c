#include <stdio.h>

/**
 * main - imprimr los numeros del zero al nueve separadaos por una coma
 *
 * Return: Always 0 (Success)
 */

int main(void)

{

char num;

for (num = 0; num <= 9; num++)

{
putchar(num + '0');

if (num < 9)

{
putchar(',');
putchar(' ');
}
}

putchar('\n');

return (0);

}
