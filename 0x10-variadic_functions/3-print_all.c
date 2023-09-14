#include "variadic_functions.h"
/**
 * print_all - prototype to print anything
 * @format: list of types of arguments
 * Return: 0
 */

void print_all(const char * const format, ...)
{
	char c;
	int i;
	double f;
	char *s;
	int a = 0;
	va_list quarrel;

	va_start(quarrel, format);

	while (format[a] != '\0')
	{
		switch (format[a])
		{
			case 'c':

				printf("%c, ", c = va_arg(quarrel, int));
				break;
			case 'i':

				printf("%d, ", i = va_arg(quarrel, int));
				break;
			case 'f':
				printf("%f, ", f = va_arg(quarrel, double));
				break;
			case 's':
				{
					s = va_arg(quarrel, char*);
					printf("%s", s);
					if (s == NULL)
						printf("(nil), ");
					break;
				}
			default:
				break;
		}
		a++;
	}

	printf("\n");
	va_end(quarrel);
}
