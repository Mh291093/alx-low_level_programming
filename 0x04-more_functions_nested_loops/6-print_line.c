#include "main.h"

/**
 * print_line - check the code
 *
 * @n: number times
 *
 * Return: 1 if its upper, 0 if not
 */

void print_line(int n)
{
	int ln_chr;

	if (n <= 0)
		_ptchar('\n');
	else
	{
		for (ln_chr = 1; ln_chr <= n; ln_chr++)
			_putchar('_');
		_putchar('\n');
	}
}
