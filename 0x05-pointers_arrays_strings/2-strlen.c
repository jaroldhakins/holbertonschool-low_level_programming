#include "holberton.h"

/**
 *_strlen - imprime la longitud de un string
 *
 *@s: es un puntero
 *
 *Return: el valor de len
 */

int _strlen(char *s)
{
int len = 0;

for (; *s != '\0'; s++)
{
len++;
}
return (len);
}
