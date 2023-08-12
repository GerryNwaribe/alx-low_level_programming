#include <stdio.h>
/**
 * main - header
 * main - print all possible combination of single digit
 *
 * Return: 0
 */
int main(void)
{
	int a = 0;

	while (a < 10)
{
	putchar(a + '0');
	if (a < 9)
{
	putchar(',');
	putchar(' ');
}
	a++;
}
	putchar('\n');
	return (0);
}
