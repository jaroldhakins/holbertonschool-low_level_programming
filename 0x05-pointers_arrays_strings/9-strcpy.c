#include "holberton.h"
/**
 *_strcpy - update value.
 *@dest: value to be evaluate.
 *@src: value to be evaluate.
 *Return: not.
 */
char *_strcpy(char *dest, char *src)
{
int a;
int b;

for (a = 0; *(src + a) != '\0'; a++)
{
}
for (b = 0 ; b < a ; b++)
{
dest[b] = src[b];
}
dest[a] = '\0';
return (dest);
}
