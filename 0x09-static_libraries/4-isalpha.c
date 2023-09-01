#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * _isalpha - upper or lowercase
 * @c: uppercase or lowercase
 *
 * Return: 0
 */
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
