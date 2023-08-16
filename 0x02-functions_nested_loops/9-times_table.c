#include <stdio.h>
#include "main.h"
/**
 * times_table - print zero to ten times table
 *
 * Return: 0
 */
void times_table(void) {
	int rows, col;

	for (rows = 0; rows <= 9; rows++)
	{

	for (col = 0; col <= 9; col++)
	{
		int product = rows * col;

		if (product == 0 )
		{
		_putchar ('0');
		}
		else if (product < 10)
		{
		_putchar ('0' + (product % 10));
		}
		else
		{
			_putchar ('0' + (product / 10));
			_putchar ('0' + (product % 10));
		}

		if (col != 9)
		{
		_putchar (',');
		_putchar (' ');
		}
	}
	_putchar('\n');
	}

}
