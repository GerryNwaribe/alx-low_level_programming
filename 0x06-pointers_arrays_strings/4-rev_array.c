#include <stdio.h>
#include "main.h"
/**
 * reverse_array - prototype to reverse array of integers
 * @a: pointer to array
 * @n: value of array
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int i;
	int tempVar;


	for (i = 0; i < n / 2; i++)
	{
		tempVar = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = tempVar;
	}

}
