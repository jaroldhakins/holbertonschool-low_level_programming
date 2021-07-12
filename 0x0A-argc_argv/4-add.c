#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * revisar     - revisa si el numero dado es un entero
 * @v: char revisado
 * Return: 1, si es un nuemro sino, else 0
 **/
int revisar(char *v)
{
int i = 0;
int num = 0;
int lon;

lon = strlen(v);
while (i < lon)
{
if (v[i] < '0' || v[i] > '9')
{
return (-1);
}
else
num = num * 10 + (v[i] - '0');
i++;
}
return (num);
}
/**
 * main - suma dos numeros positivos
 * @argc: arguemento
 * @argv: array
 * Return: resultado de la suma o cero
 **/
int main(int argc, char *argv[])
{
int i, num, sum;

sum = 0;
for (i = 1; i < argc; i++)
{
num = revisar(argv[i]);
if (num == -1)
{
printf("Error\n");
return (1);
}
sum += num;
}
printf("%d\n", sum);
return (0);
}
