#include <stdio.h>
/**
 * main - Entry point
 * main - print all three digit combo
 *
 * Return: 0
 */
int main(void)
{
	int firstNum = 0;

	while (firstNum < 9)
	{
		int secNum = firstNum + 1;

		while (secNum <= 8)
		{
			int lastNum = secNum + 1;

			while (lastNum <= 9)
			{
				putchar ('0' + firstNum);
				putchar ('0' + secNum);
				putchar ('0' + lastNum);

			if (firstNum != 7 || secNum != 8 || lastNum != 9)
			{
				putchar (',');
				putchar (' ');
			}
			lastNum++;
			}
			secNum++;
		}
		firstNum++;
	}
	putchar ('\n');
	return (0);
}
