#include <stdio.h>
#include "main.h"
/**
 * print_rev - print string in reverse
 * @s: string
 * Return: 0
 */
void print_rev(char *s)
{

	int lth = 0;
	int a;

	for (; *s != '\0'; s++)
	{
		lth++;
	}
		s--;
	for (a = lth; a >= 0; a--)
	{
		_putchar (*s);
		s--;
	}
	_putchar ('\n');
}
