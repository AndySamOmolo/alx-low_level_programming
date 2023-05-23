#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int main(void)
{
	_islower();
	return (0);
}
