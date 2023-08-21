#include <stdio.h>
#include "main.h"
/**
 * print_array - prototype to print array
 * @a: array of integers
 * @n: number of elements in array
 * Return: 0
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
