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
char *p = s;
int lon;
char aux;
int t = 0;
char e;

while (*p != '\0')
{
p++;
lon++;
}
lon = lon - 1;

for (; t < lon; t++)
{
aux = s[t];
e = s[lon];
s[t] = e;
s[lon] = aux;
lon--;
}
}
