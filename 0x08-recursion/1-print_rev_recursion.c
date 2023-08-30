#include <stdio.h>
#include "main.h"
/**
 * _print_rev_recursion - prototype to print string in reverse
 * @s: string
 * Return: 0
 */
void _print_rev_recursion(char *s)
{

	if (*s == '\0')
		return;

	else
	{
		_print_rev_recursion(s + 1);
		_putchar (*s);

	}

}
