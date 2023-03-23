#include "main.h"

/**
 * print_triangle - check the code
 *
 *@size: triangle
 *
 * Return: Always (0) success
 */

void print_triangle(int size)
{
	int h, w;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (h = 1; h <= size; h++)
		{
			for (w = 1; w <= size; w++)
			{
				if ((h + w) <= size)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
			_putchar('\n');
		}
	}
}
