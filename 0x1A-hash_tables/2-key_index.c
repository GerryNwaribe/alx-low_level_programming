#include "hash_tables.h"
/**
 *  key_index - function that gives you the index of a key
 * @size:  size of the array of the hash table
 * @key: the key
 * Return:  index at which the key/value pair should be stored in array
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value = hash_djb2(key);

	unsigned long int index = hash_value % size;

	return (index);
}
