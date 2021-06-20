#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)

{

char l;

l = 'a';

do {

putchar(l);
l++;
putchar('\n');

} while (l <= 'z');

return (0);

}
