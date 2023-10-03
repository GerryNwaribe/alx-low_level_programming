#include "main.h"
/**
 * print_error - function to print error
 * @code: code
 * @message: error message
 * Return: 0
 */
void print_error(int code, const char *message)
{
	dprintf(STDERR_FILENO, "Error: %s\n", message);
	exit(code);
}
