#include <stdio.h>
#include "main.h"
/**
 * _strspn - prototype to get presufix substring
 * @s: main string to be assessed
 * @accept: string to be used
 * Return: 0
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int lenght = 0;
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{
		int b;
		int create = 0;

		for (b = 0; accept[b] != '\0'; b++)
		{

			if (s[a] == accept[b])
			{
				create = 1;
				break;
			}

		}
		if (create == 0)
		{
			return (lenght);
		}
		lenght++;

	}
	return (lenght);
}
