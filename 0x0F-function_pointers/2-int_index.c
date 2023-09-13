#include "function_pointers.h"
/**
 * int_index - prototype to search for integer
 * @array: pointer of int type
 * @size: size of array
 * @cmp: function pointer
 * Return: 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (size <= 0)
		return (-1);

	for (a = 0; a < size; a++)
	{
		if (cmp(array[a]))
			return (a);
	}

	return (-1);

}
