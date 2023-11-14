#include <stdio.h>
#include "main.h"
/**
 * _strpbrk - prototype
 * @s: string
 * @accept: also a string
 * Return: 0
 */
char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
			if (*s == accept[k])
				/* Return a pointer to the first matching character in 's'. */
				return (s);
		}
		s++;
	}

	return ('\0'); /* Return NULL if no match is found. */
}
