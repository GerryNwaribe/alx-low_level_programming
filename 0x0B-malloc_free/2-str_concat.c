#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * str_concat - prototype to concatenate two strings
 * @s1: string to be copied
 * @s2: string to be copied
 * Return: 0
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int a, b, lenght;
	char *c;

	if (s1 == NULL && s2 == NULL)
		lenght = 1;
	else if (s1 != NULL && s2 != NULL)
		lenght = strlen(s1) + strlen(s2) + 1;
	else if (s1 == NULL && s2 != NULL)
		lenght = strlen(s2) + 1;
	else if (s1 != NULL && s2 == NULL)
		lenght = strlen(s1) + 1;

	c = malloc(lenght * sizeof(char));
	if (c == NULL)
	{
		return (0);
	}
	if (s1 != NULL)
	{
		for (a = 0; s1[a] != '\0'; a++)
		{
			c[a] = s1[a];
		}
	}
	if (s2 != NULL)
	{
		for (b = 0; s2[b] != '\0'; b++)
		{
			c[a + b] = s2[b];
		}
	}
	c[lenght - 1] = '\0';
	return (c);
}
