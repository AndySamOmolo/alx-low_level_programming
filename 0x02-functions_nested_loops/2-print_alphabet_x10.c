#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	for(int i = 0; i <=10; i++)
	{
		char ch;

		for (ch = 'a'; ch <= 'z'; ch++)
		{
			putchar(ch);
		}
	}
	putchar('\n');
	return (0);
}
