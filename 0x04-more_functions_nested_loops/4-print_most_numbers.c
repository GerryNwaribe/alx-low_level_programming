#include <stdio.h>
#include "main.h"
/**
 * print_most_numbers - print number zero to nine except two and four
 *
 * Return: 0
 */
void print_most_numbers(void)
{
	int a;

	while (a <= 9)
	{
		if (a != 2 && a != 4)
		{
			_putchar ('0' + a);
		}
		a++;
	}
	_putchar ('\n');
}
