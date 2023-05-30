#include <stdio.h>
#include "main.h"

/**
 * _puts - Prints a string followed by newline
 * @str: Pointer to string str
 *
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}

	_putchar('\n');
}
