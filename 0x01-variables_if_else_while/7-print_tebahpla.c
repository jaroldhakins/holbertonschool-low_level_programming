#include <stdio.h>

/**
 * main - alfabeto al reves
 *
 * Return: Always 0 (Success)
 */

int main(void)

{

char l;

l = 'z';

do {

putchar(l);
l--;

} while (l >= 'a');

putchar('\n');

return (0);

}
