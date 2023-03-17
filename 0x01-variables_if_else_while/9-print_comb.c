#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program which prints by printf function
 *
 * Return: always 0 (success)
*/

int main(void)
{
	int n;

	for (n = 48; n < 57; n++)
	{
		putchar(n);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
