#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * argstostr - concatenate all arguments of a program
 * @ac: argument count
 * @av: argument vector
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int a, i = 0, newLine = 0, finalLen = 0, lenght = 0;
	char *c;

		if (ac == 0 || av == NULL)
		{
			return (NULL);
		}

		for (a = 0; a < ac; a++)
		{
			lenght += strlen(av[a]);
		}
		newLine = ac;
		finalLen = lenght + newLine;
		c = malloc((finalLen + 1) * sizeof(char));
		if (c == NULL)
		{
			return (NULL);
		}
		for (a = 0; a < ac; a++)
		{
			strcpy(c + i, av[a]);
			i += strlen(av[a]);

			c[i] = '\n';
			i++;

		}
		c[finalLen] = '\0';
		return (c);
}
