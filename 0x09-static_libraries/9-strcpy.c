#include <stdio.h>
#include "main.h"
/**
 * _strcpy - prototype to copy string
 * @dest: destination of pointer
 * @src: pointer
 * Return: 0
 */
char *_strcpy(char *dest, char *src)
{
	char *origin_dest = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (origin_dest);
}
