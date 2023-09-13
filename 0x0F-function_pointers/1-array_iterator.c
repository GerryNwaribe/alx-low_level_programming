#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - prototype to iterate over arrays
 * @array: array
 * @size: size of array
 * @action: function pointer
 * Return: 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t a;

	if (array != NULL && action != NULL)
	{
		for (a = 0; a < size; a++)
		{
			action(array[a]);
		}
	}
}
