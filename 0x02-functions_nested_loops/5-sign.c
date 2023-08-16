#include "main.h"
#include <stdio.h>
/**
 * print_sign - print sign funtion
 * @n: - print sign of number
 *
 * Return: 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
	putchar ('+');
	return (1);
	}

	else if (n < 0)
	{
	putchar ('-');
	return (-1);
	}

	else
	{
	putchar ('0');
	return (0);
	}
}
