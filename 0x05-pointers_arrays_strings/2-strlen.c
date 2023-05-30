#include <stdio.h>
#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: pointer to string s
 *
 * Return: Always c
 */

int _strlen(char *s)
{
	int c = 0;

	for (; *s != '\0'; s++)
	{
		c++;
	}

	return (c);
}
