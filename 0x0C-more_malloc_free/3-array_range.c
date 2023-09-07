#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * array_range - prototype to creat array of integers
 * @min: minimum range
 * @max: maximum range
 * Return: 0
 */
int *array_range(int min, int max)
{
	unsigned int a, size;
	int *c;

	if (min > max)
	{
		return (NULL);
	}

	size = max - min + 1;
	c = malloc(sizeof(int) * size);
	if (c == NULL)
	{
		return (NULL);
	}

	for (a = 0; a < size; a++)
	{
		c[a] = min + a;

	}

	return (c);
}
