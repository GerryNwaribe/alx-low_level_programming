#include <stdio.h>
#include "main.h"
/**
 * string_toupper - prototype to capitalize all words
 * @a: pointer
 * Return: 0
 */
char *string_toupper(char *a)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] >= 'a' && a[i] <= 'z')
		{
			a[i] = a[i] - 32;
		}
	}

	return (a);
}
