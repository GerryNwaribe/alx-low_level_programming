#include <stdio.h>
#include "main.h"
/**
 * swap_int - prototype to swap integers
 * @a: first integer with value ninty eight
 * @b: second integer with value forty two
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int tempVariable = *a;
	*a = *b;
	*b = tempVariable;
}
