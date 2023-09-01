#include <stdio.h>
#include "main.h"
/**
 * _strncpy - prototype to copy string
 * @dest: destination of string
 * @src: source to be copied
 * @n: character limitation
 * Return: 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int lenght = 0;

	while (dest[lenght] != '\0')
	{
		lenght++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
