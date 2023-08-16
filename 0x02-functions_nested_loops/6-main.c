#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _abs - absolute value
 * _abs(int) - absolute value of integer
 *
 * Return: 0
 */
int main(void)
{
	int r;

	r = _abs(-1);
	printf("%d\n", r);
	r = _abs(0);
	printf("%d\n", r);
	r = _abs(1);
	printf("%d\n", r);
	r = _abs(-98);
	printf("%d\n", r);
	return (0);
}
