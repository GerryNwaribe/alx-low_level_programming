#include <stdio.h>
#include "main.h"
/**
 * print_diagonal - print diagonal line
 * @n: integer
 *
 * Return: 0
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		putchar ('\n');
	}
	else
	{
		int m;

		for (m = 0; m < n; m++)
		{

			int sp;

			for (sp = 0; sp < m; sp++)
			{
				putchar (' ');
			}
			putchar ('\\');
			putchar ('\n');
		}
	}
}
