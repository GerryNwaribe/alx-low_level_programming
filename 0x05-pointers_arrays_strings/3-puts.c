#include <unistd.h>
#include <stdio.h>
#include "main.h"
/**
 * _puts - prototype to print string
 * @str: string
 * Return: 0
 */
void _puts(char *str)
{
	int n = 0;

	while (str[n] != '\0')
	{
		n++;
	}

	write(1, str, n);
	write(1, "\n", 1);
}
