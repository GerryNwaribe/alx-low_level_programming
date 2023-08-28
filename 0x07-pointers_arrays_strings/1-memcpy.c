#include <stdio.h>
#include "main.h"
/**
 * _memcpy - prototype to copy memory area
 * @dest: destination
 * @src: source
 * @n: number of elements to be copied
 * Return: 0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}

	return (dest);
}
