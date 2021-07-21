#ifndef HEADER_FILE
#define HEADER_FILE dog.h

/**
 * struct dog - Define a new type of structure
 * with the following elements: name, age, owner.
 *
 *@name: name of the pet
 *@age: age of the pet
 *@owner: pet's owner
 *
 * Return: no return
 **/

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
