#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 *  _isdigit - print digit zero to nine
 *  @c: integer
 *
 *  Return: 0
 */
int _isdigit(int c)
{

	if (c >= '0' && c <= '9')
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
