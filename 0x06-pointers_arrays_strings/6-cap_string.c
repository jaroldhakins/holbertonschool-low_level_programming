#include "holberton.h"
/**
 * cap_string - pone todas las primeras letras de una palabra en mayusculas.
 *
 *@ptr: apunta al string
 *
 * Return: ptr
 */
char *cap_string(char *ptr)
{
int a;

if (ptr[0] >= 97 && ptr[0] <= 122)
{
ptr[0] = ptr[0] - 32;
}
for (a = 0; ptr[a] != '\0'; a++)
{
switch (ptr[a])
{
case ',':
case ';':
case '.':
case '!':
case '?':
case '"':
case '(':
case ')':
case '{':
case '}':
case ' ':
case '\n':
case '\t':
if (ptr[a + 1] > 96 && ptr[a + 1] < 123)
{
ptr[a + 1] = ptr[a + 1] - 32;
}
}
}
return (ptr);
}
