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
	int n = 122;

	while (n >= 97)
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
