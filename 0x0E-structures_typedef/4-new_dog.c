#include <stdlib.h>
#include "dog.h"

/**
 * *new_dog - creates a new dog.
 *
 *@name: name of the dog
 *@age: age of the dog
 *@owner: dog's owner
 *
 * Return: puntero
 **/

dog_t *new_dog(char *name, float age, char *owner)
{
	int namecp, ownercp, i;
	dog_t *ptr;

	ptr = (dog_t *)malloc(sizeof(dog_t));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (namecp = 0; name[namecp++];)
	{
	}
	for (ownercp = 0; owner[ownercp++];)
	{
	}
	ptr->name = malloc(namecp * sizeof(ptr->name));
	if (ptr->name == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (i = 0; i <= namecp; i++)
	{
		ptr->name[i] = name[i];
	}
	ptr->age = age;
	ptr->owner = malloc(ownercp * sizeof(ptr->owner));
	if (ptr->owner == NULL)
	{
		free(ptr->name);
		free(ptr);
		return (NULL);
	}
	for (i = 0; i <= ownercp; i++)
	{
		ptr->owner[i] = owner[i];
	}
	return (ptr);
}
