#include <stdio.h>
#include "main.h"
/**
 * _strlen_recursion - prototype to find lenght of string
 * @s: string
 * Return: 0
 */
int _strlen_recursion(char *s)
{

	if (*s == '\0')
		return (0);

	else
	{
		return (1 + _strlen_recursion(s + 1));
	}

}
