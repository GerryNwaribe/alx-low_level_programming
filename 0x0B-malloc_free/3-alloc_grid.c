#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - return pointed to two dimensional array of integers
 * @width: columns
 * @height: rows
 * Return: 0
 */
int **alloc_grid(int width, int height)
{
	int a, b;
	int **c;

	if (width == 0 || height == 0)
	{
		return (NULL);
	}

	c = malloc(height * sizeof(int *));
	if (c == NULL)
	{
		return (NULL);
	}

	for (a = 0; a < height; a++)
	{
		c[a] = malloc(width * sizeof(int));
		if (c[a] == NULL)
		{
			for (b = 0; b < a; b++)
			{
				free(c[b]);
			}
			free(c);
			return (NULL);
		}
		for (b = 0; b < width; b++)
		{
			c[a][b] = 0;
		}
	}

	return (c);
}
