#include <stdio.h>
#include "main.h"
/**
 * _strncat - concatenate two strings with n character limit
 * @dest: destination of string
 * @src: source of string to be copied
 * @n: character limit
 * Return: 0
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int lenght = 0;

	while (dest[lenght] != '\0')
	{
		lenght++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[lenght] = src[i];
		lenght++;
	}
	dest[lenght] = '\0';
	return (dest);
}
