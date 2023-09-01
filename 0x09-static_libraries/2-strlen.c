#include <stdio.h>
#include "main.h"
/**
 * _strlen - prototype to calculate lenght of string
 * @s: string
 * Return: 0
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
