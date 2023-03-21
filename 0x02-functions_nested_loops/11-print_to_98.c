#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - check the code
 * @n: the number to start printing
 * Return: Always (0)
 */

void print_to_98(int n)
{
	int count;

	if (n > 98)
	{
		for (count = n; count > 98; count--)
		{
			printf("%d, ", count);
		}
	}
	else
	{
		for (count = n; count < 98; count++)
		{
			printf("%d, ", count);
		}
	}
	printf("98\n");
}
