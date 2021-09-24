#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * _islower - Muestra 1 si es minuscula, 0 si es otro.
 * @c: The character in ASCII code
 * Return: 1 para minuscula, 0 para el resto
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
	_putchar('\n');
}
/**
 * _isalpha - muestra 1 para letras 0 para otros
 * @c: The character in ASCII code
 * Return: 1 para letras. Returns 0 para otros
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
	_putchar('\n');
}
/**
 * _abs - retorna el valor absoluto
 * @num: es un entero
 * Return: valor absoluto de un numero
 */
int _abs(int num)
{
	if (num >= 0)
		return (num);
	else
		return (num * -1);
}
/**
 * _isupper - retorna 1 si es mayuscula o 0 si es minuscula
 *@c: is a integer
 * Return: retorna 1 si es mayuscula o 0 si es minuscula
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
	return (c);
}
