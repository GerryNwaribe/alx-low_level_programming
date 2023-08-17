#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * _isupper - print uppercase characters
 * @c: uppercase
 *
 * Return: 0
 */
int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
