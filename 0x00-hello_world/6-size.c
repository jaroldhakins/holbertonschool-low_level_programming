#include <stdio.h>

/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)

{

char caracter;
int entero;
long int entero_largo;
long long int entero_extralargo;
float flotante;

printf("Size of a char: %lu byte(s) \n", sizeof(caracter));
printf("Size of an int: %lu byte(s) \n", sizeof(entero));
printf("Size of a long int: %lu byte(s) \n", sizeof(entero_largo));
printf("Size of a long long int: %lu byte(s) \n", sizeof(entero_extralargo));
printf("Size of a float: %lu byte(s) \n", sizeof(flotante));

return (0);

}
