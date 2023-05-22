#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int ch;
	for (ch = 0; ch <= 8; ch++)
	{
		putchar(ch + '0');
		putchar(',');
		putchar(' ');
	}
	putchar('9');
	putchar('\n');
	return (0);
}
