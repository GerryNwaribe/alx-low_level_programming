#include <stdio.h>
/**
* main - entry point
* main - print combination of two two digit numbers
*
* Return: 0
*/
int main(void)
{
	int ftSet;
	int sSet;

	for (ftSet = 0; ftSet <= 99; ftSet++)
{


		for (sSet = ftSet + 1; sSet <= 99; sSet++)
		{

		putchar (' ');
		putchar ('0' + (ftSet / 10));
		putchar ('0' + (ftSet % 10));
		putchar (' ');
		putchar ('0' + (sSet / 10));
		putchar ('0' + (sSet % 10));

			if (ftSet / 10 != 9 || ftSet % 10 != 8 || sSet / 10 != 9 || sSet % 10 != 9)
			{
			putchar (',');
			putchar (' ');
			}
		}

}


	putchar ('\n');
	return (0);
}

