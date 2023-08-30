#include <stdio.h>
#include "main.h"
/**
 *  _pow_recursion - prototype to get value raised to value
 *  @x: base
 *  @y: power to be raised to
 *  Return: 0
 */
int _pow_recursion(int x, int y)
{

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else if (y > 0)
	{
		return (x * _pow_recursion(x, (y - 1)));
	}

	return (0);
}
