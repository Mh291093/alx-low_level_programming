#include "main.h"

/**
 * _strlen - a function
 *
 * @s: input
 *
 * Return: x
 */

int _strlen(char *s)
{
	int x = 0;

	while (*s != '\0')
	{
		x++;
		s++
	}
	return (x);
}
