#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - prototype to allocate memory for an array
 * @nmemb: array of elements
 * @size: number of bytes
 * Return: 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ab;
	unsigned int finalSize;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	finalSize = size * nmemb;
	ab = malloc(finalSize);
	if (ab == NULL)
	{
		return (NULL);
	}
	memset(ab, 0, finalSize);
	return (ab);
}
