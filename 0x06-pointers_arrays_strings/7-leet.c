#include "holberton.h"
/**
 * *leet - cambia algunas letras por numeros
 *
 *@ptr: puntero
 *
 * Return: ptr
 */
char *leet(char *ptr)
{
int a, b;
char str1[10] = "aAeEoOtTlL";
char str2[10] = "4433007711";

for (a = 0; ptr[a]; a++)
{
for (b = 0; b < 10; b++)
{
if (ptr[a] == str1[b])
{
ptr[a] = str2[b];
}
}
}
return (ptr);
}
