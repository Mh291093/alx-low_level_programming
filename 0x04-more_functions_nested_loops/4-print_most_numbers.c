#include "main.h"

/**
 * print_most_numbers - check the code
 *
 * Return: 1 if its upper, 0 if not
 */

void print_most_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		if (n == 2 || n == 4)
			continue;
		_putchar(n + 48);
	}
	_putchar('\n');
}
