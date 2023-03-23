#include "main.h"

/**
 * print_line - check the code
 *
 * @n: number times
 *
 * Return:
 */

void print_line(int n)
{
	int lnchr;

	if (n <= 0)
	{
		_ptchar('\n');
	}
	else
	{
		for (lnchr = 1; lnchr <= n; lnchr++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
