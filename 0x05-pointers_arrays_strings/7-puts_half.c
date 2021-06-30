#include <stdio.h>
#include "holberton.h"
/**
 *puts_half - update value.
 *@str: value to be evaluate.
 *Return: not.
 */
void puts_half(char *str)
{
int strlen = 0;
char *p = str;
int i;

while (*p != '\0')
{
p++;
strlen++;
}
if (strlen % 2 == 0)
{
i = strlen / 2;
}
else
{
i = (strlen + 1) / 2;
}
for (; i < strlen ; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
