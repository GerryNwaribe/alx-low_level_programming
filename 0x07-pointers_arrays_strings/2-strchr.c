#include <stdio.h>
#include "main.h"
/**
 * _strchr - prototype to locate a character in string
 * @s: string
 * @c: character to be searched for
 * Return: 0
 */
char *_strchr(char *s, char c)
{

	while (*s != '\0')
	{
		s++;

		if (*s == c)
		{
			return (s);
		}

	}
	return (NULL);
}
