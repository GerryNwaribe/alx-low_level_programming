#include <stdio.h>
/**
 * main - Entry point
 * main - print different combo of two digits
 *
 * Return: 0
 */
int main(void)
{
	int firstNum = 0;

	while (firstNum < 9)
	{
		int lastNum = firstNum + 1;

		while (lastNum <= 9)
		{
			putchar ('0' + firstNum);
			putchar ('0' + lastNum);

			if (firstNum != 8 || lastNum != 9)
			{
				putchar (',');
			}	putchar (' ');
			lastNum++;
		}
	firstNum++;
	}

	putchar ('\n');
	return (0);
}
