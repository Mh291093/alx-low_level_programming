#include "main.h"

/**
 * swap_int - a function
 *
 * @a: input
 *
 * @b: input
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
