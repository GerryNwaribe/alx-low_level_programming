#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - prototype to print name
 * @name: name to be printed
 * @f: function pointer with char * parameter
 * Return: 0
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
