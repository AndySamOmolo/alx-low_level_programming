#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int ch;
	for (ch = 0; ch <= 9; ch++)

	{
		putchar(ch + '0');
			if (ch != 9)
			{
				putchar(',');
				putchar(' ');
			}
	}
	return (0);
}
