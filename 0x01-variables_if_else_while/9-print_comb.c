#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	char ch;
	char b = "\' ";

	for (ch = 0; ch <= 9; ch++)
	{
		putchar(ch + '0');
		putchar(b);
	}
	putchar('\n');
}
