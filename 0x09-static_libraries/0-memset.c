#include "main.h"

/**
 * *_memset - a function
 *
 * @s: input
 *
 * @b: char
 *
 * @n: input
 *
 * Return: pointer s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}
	return (s);
}
