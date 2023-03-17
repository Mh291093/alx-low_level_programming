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
	char c;

	c = 'a';

	while (c <= 'z')
	{
		if ((c != 'q' && c != 'e') && c <= 'z')
		{
			putchar(c);
		}
		c++;
	}
	putchar('\n');
	return (0);
}
