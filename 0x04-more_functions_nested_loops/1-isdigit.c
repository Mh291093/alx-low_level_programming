#include "main.h"

/**
 * _isdigit - check the code
 *
 * @c: input
 *
 * Return: 1 if its upper, 0 if not
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
