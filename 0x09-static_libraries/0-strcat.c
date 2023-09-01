#include <stdio.h>
#include "main.h"
/**
 * _strcat - prototype to concatenate two strings
 *@dest: destination of string
 *@src: source of string to be copied
 * Return: 0
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int lenght = 0;

	while (dest[lenght] != '\0')
	{
		lenght++;
	}
	for (i = 0; src[i] != '\0'; i++, lenght++)
	{
		dest[lenght] = src[i];
	}
	dest[lenght] = '\0';
	return (dest);
}
