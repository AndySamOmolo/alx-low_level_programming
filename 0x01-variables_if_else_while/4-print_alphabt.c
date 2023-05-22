#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <='z'; ch++)
	{
		do
		{
			putchar(ch);
		} while (ch != 'q' && ch != 'e')
	putchar('\n');
	}
	return (0);
}
