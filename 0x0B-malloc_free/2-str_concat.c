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
	int a;
	int b;
	int lenght1 = 0;
	int lenght2 = 0;
	char *c;

	while (s1[lenght1] != '\0')
	{
		lenght1++;
	}
	while (s2[lenght2] != '\0')
	{
		lenght2++;
	}

	c = malloc((lenght1 + lenght2 + 1) * sizeof(char));

	if (c == 0)
	{
		return (0);
	}
	for (a = 0; s1[a] != '\0'; a++)
	{
		c[a] = s1[a];

	}
	for (b = 0; s2[b] != '\0'; b++)
	{
		c[a + b] = s2[b];
	}

	c[a + b] = '\0';
	return (c);
	free(c);
}
