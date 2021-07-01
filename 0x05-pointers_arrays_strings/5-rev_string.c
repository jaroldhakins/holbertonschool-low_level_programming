#include "holberton.h"

/**
 * rev_string - invierte los valores de un string
 *
 *@s: es un array
 *
 *Return: no return
 */

void rev_string(char *s)
{
int lon = 0;
int a;
char *p = s;
int e;
int x;
char n;

while (*p != '\0')
{
p++;
lon++;
}
a = lon - 1;
for (e = 0 ; e < ((a / 2) + 1) ; e++)
{
x = (a - e);
n = s[e];
s[e] = s[x];
s[x] = n;
}
}
