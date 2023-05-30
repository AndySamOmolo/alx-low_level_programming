#include <stdio.h>
#include "main.h"

/**
 * swap_int - Swaps the value of two integers
 * @a: Pointer to int a
 * @b: Pointer to int b
 *
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	int d = *b;

	*a = d;
	*b = c;
}
