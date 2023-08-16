#include <stdio.h>
#include "main.h"
/**
 * jack_bauer - print all minutes prototype
 *
 * Return: 0
 */
void jack_bauer(void)
{
	int firstmin;
	int secmin;

	for (firstmin = 0; firstmin <= 23; firstmin++)
	{
	for (secmin = 0; secmin <= 59; secmin++)
		{
		_putchar ('0' + (firstmin / 10));
		_putchar ('0' + (firstmin % 10));
		_putchar (':');
		_putchar ('0' + (secmin / 10));
		_putchar ('0' + (secmin % 10));
		_putchar ('\n');

		}
	}

	putchar ('\n');


}
