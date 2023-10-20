#include "main.h"

/**
 * get_endianness - Checks if a machine is little-endian or big-endian.
 *
 * Return: 0 for big-endian, 1 for little-endian.
 */
int get_endianness(void)
{
	unsigned int test = 1;
	char *pointer = (char *) &test;

	/* Check the value of the least significant byte to determine endianness */
	return (*pointer);
}
