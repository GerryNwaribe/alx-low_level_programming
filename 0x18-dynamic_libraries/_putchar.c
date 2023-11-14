#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @a: Character to print
 *
 * Return: On success 1 is returned, on error -1 is returned
 */
int _putchar(char a)
{
	return (write(1, &a, 1));
}
