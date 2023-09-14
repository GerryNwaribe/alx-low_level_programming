#include "variadic_functions.h"
/**
 * sum_them_all- prototype to accept variables to sum
 * @n: number of arguments
 * Return: 0
 */
int sum_them_all(const unsigned int n, ...)
{
	int a, add = 0;
	va_list quarrel;
	unsigned int b = n;

	va_start(quarrel, n);

	while (b > 0)
	{
		a = va_arg(quarrel, int);
		add += a;
		b--;
	}

	if (n == 0)
	{
		return (0);
	}

	va_end(quarrel);
	return (add);
}
