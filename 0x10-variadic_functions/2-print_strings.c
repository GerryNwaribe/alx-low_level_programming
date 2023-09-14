#include "variadic_functions.h"
/**
 * print_strings - prototype to print strings
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 * Return: 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *b;
	unsigned int a = n;
	va_list quarrel;

	va_start(quarrel, n);
	while (a < n)
	{
		b = va_arg(quarrel, char *);
		if (b != NULL)
		{
			printf("%s", b);
		}
		else
		{
			printf("(nil)");
		}
		if (a != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
		a--;
	}
	printf("\n");
	va_end(quarrel);
}

