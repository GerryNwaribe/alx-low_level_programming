#include "variadic_functions.h"

/**
 * print_all - prints anything.
 * @format: a list of types of arguments passed to the function.
 *
 * Return: no return.
 */
void print_all(const char * const format, ...)
{
	char *str, *seperate = ""; 
	int a = 0;
	va_list quarrel;

	va_start(quarrel, format);
	if (format)
	{
		while (format[a])
		{
			switch (format[a])
			{
				case 'c':
					printf("%s%c", seperate, va_arg(quarrel, int));
					break;
				case 'i':
					printf("%s%d", seperate, va_arg(quarrel, int));
					break;
				case 'f':
					printf("%s%f", seperate, va_arg(quarrel, double));
					break;
				case 's':
					{
					str = va_arg(quarrel, char *);
					if (str == NULL)
					{
					str = "(nil)";
					}
					printf("%s%s", seperate, str);
					break;
					}
				default:
				continue;
			}
			seperate = ", ";
			a++;
		}
	}
	printf("\n");
	va_end(quarrel);
}

