#include "variadic_functions.h"
/**
 * print_numbers - prototype to print numbers
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 * Return: 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int b;
	unsigned int a = n;
	va_list quarrel;

	va_start(quarrel, n);

	while (a > 0)
	{
		b = va_arg(quarrel, int);
		printf("%d", b);

		if (a > 1 && separator != NULL)
		{
			printf("%s", separator);
		}

		a--;
	}

	printf("\n");

	va_end(quarrel);
}
