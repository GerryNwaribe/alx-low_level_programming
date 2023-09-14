#include "variadic_functions.h"

/**
 * print_all - prints anything.
 * @format: a list of types of arguments passed to the function.
 *
 * Return: no return.
 */
void print_all(const char * const format, ...)
{
	char *str;
	int a = 0;
	va_list quarrel;
	int b = 0;
	va_start(quarrel, format);
	if (format)
	{
		while (format[a] != '\0')
		{
			switch (format[a])
			{
				case 'c':
					printf("%c", va_arg(quarrel, int));
					b = 1;
					break;
				case 'i':
					printf("%d", va_arg(quarrel, int));
					b = 1;
					break;
				case 'f':
					printf("%f", va_arg(quarrel, double));
					b = 1;
					break;
				case 's':
					{
						str = va_arg(quarrel, char *);
						if (str == NULL)
						{
							printf("(nil)");
							break;
						}
						printf("%s", str);
						b = 1;
						break;
					}
				default:
					break;
			}
			if (format[a + 1] != '\0' && b)
				printf(", ");
			a++;
			b = 0;

		}
	}
	printf("\n");
	va_end(quarrel);
}

