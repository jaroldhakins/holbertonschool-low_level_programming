#include "holberton.h"
/**
 * print_last_digit - imprime el ultimo digito
 *
 *@num: numero entero
 *
 * Return: el ultimo digito
 */
int print_last_digit(int num)
{
int lastdigit;

lastdigit = num % 10;

if (lastdigit >= 0)
{
_putchar(lastdigit + 48);
return (lastdigit);
}
else
{
_putchar(-lastdigit + 48);
return (-lastdigit);
}
_putchar('\n');
}
