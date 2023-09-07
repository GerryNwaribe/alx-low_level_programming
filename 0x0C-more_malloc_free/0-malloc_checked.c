#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include "main.h"
/**
 * malloc_checked - prototype to allocate memory
 * @b: size of memory to be allocated
 * Return: 0
 */
void *malloc_checked(unsigned int b)
{
	void *cd;

	cd = malloc(b);

	if (cd == NULL)
	{
		exit(98);
	}
	return (cd);
}
