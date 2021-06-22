#include "holberton.h"

/**
 * main - imprime la palabra holberton
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

int i;
char a[9] = "Holberton";

for (i = 0; i <= 8; i++)
{
_putchar(a[i]);
}

_putchar('\n');

return (0);

}
