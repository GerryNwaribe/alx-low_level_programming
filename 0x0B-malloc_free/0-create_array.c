#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_array - prototype to create array of chars
 * @size: size of array
 * @c: specific char to be specailized with
 * Return: 0
 */
char *create_array(unsigned int size, char c)
{
	char *p = malloc(size * sizeof(char));
	unsigned int a;

	if (p == NULL)
	{
		return (NULL);
	}

	if (size == 0)
	{
		return (NULL);
	}
	for (a = 0; a < size; a++)
	{
		p[a] = c;
	}
	return (p);
	free(p);
}
