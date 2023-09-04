#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - prototype to copy a string a point to new allocated memory
 * @str: string to be copied
 * Return: 0
 */
char *_strdup(char *str)
{
	unsigned int size = 0;
	unsigned int b;
	char *a;

	if (*str == '\0')
	{
		return (NULL);
	}
	while (str[size] != '\0')
	{
		size++;
	}

	a = malloc((size + 1) * sizeof(char));

	if (a == NULL)
	{
		return (0);
	}

	for (b = 0; b <= size; b++)
	{
		a[b] = str[b];
	}
	return (a);
	free(a);

}
