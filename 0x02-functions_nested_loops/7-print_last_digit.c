#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - print last digit
 * @a: integer
 *
 * Return: 0
 */
int print_last_digit(int a)
{
	int lstdigit;

	lstdigit = a % 10;
	if (lstdigit < 0)
	{
	lstdigit = -(lstdigit);
	}

	_putchar ('0' + lstdigit);

	return (lstdigit);

}
