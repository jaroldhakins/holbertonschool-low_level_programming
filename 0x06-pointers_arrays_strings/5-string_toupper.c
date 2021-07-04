#include "holberton.h"
/**
 * *string_toupper - convierte minusculas en mayusculas
 *
 *@ptr: es un puntero
 *
 *Return: ptr
 */
char *string_toupper(char *ptr)
{
int a;

for (a = 0; ptr[a] != 0; a++)
{
if (ptr[a] >= 97 && ptr[a] <= 122)
{
ptr[a] = ptr[a] - 32;
}
}
return (ptr);
}
