#include "hash_tables.h"

/**
 * hash_table_create - create a hash table
 * @size: size of the table
 * Return: pointer to the table
 **/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash;

	if (size == 0)
		return (NULL);
	new_hash = malloc(sizeof(hash_table_t));
	if (new_hash == NULL)
		return (NULL);

	new_hash->size = size;
	new_hash->array = calloc(size, sizeof(hash_node_t *));
	if (new_hash->array == NULL)
	{
		free(new_hash);
		return (NULL);
	}
	return (new_hash);
}
