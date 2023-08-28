#include <stdio.h>
#include "main.h"
/**
 * _memset - prototype to fill memory with constant byte
 * @s: array
 * @b: value to be assigned
 * @n: total number of elements in array
 * Return: 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}
