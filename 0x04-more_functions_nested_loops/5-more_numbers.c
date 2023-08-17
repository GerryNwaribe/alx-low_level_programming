#include <stdio.h>
#include "main.h"
/**
 * more_numbers - print zero to fourteen ten times
 *
 * Return: 0
 */
void more_numbers(void)
{
	int b = 0;
	int a;

	while (b < 10)
	{

		for (a = 0; a <= 14; a++)
		{

			if (a > 9)
				_putchar ('0' + (a / 10));
			_putchar ('0' + (a % 10));

		}
		b++;
		_putchar ('\n');
	}

}
