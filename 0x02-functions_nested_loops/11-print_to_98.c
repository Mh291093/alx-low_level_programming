#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - check the code
 * @n: the number to start printing
 * Return: Always (0)
 */

void print_to_98(int n)
{
	if (n <= 90)
	{
		for (; n <= 98; n++)
		{
			if (n == 98)
			{
				printf("%d", n);
				printf("\n");
				break;
			}
			else
			{
				printf("%d, ", n);
			}
		}
	}
	else
	{
		for (; n >= 98; n++)
		{
			if (n == 98)
			{
				printf("%d", n);
				printf("\n");
				break;
			}
			else
			{
				printf("%d, ", n);
			}
		}
	}
}
