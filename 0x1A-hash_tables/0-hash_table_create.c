#include "hash_tables.h"
/**
 * hash_table_create - function that creates a hash table
 * @size: size of the array
 * Return: pointer to hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash;
	unsigned long int a = 0;

	hash = malloc(sizeof(size));
	if (hash == NULL)
	{
		free(hash);
		return (NULL);
	}

	hash->array = malloc(sizeof(hash_node_t *) * size);
	if (hash->array == NULL)
	{
		free(hash);
		return (NULL);
	}

	for (a = 0; a < size; a++)
	{
		hash->array[a] = NULL;
	}

	hash->size = size;

	return (hash);
}
