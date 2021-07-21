#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialize a variable of type struct dog
 *
 * @d: pointer to dog
 * @name: apunta a la variable dog
 * @age: age of dog
 * @owner: apunta a la variable owner.
 *
 * Return: nothing
 **/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		;
	}
	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
