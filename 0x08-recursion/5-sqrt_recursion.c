#include "main.h"

/**
 * _sqrt_recursion - a function
 *
 * @n: input
 *
 * @val: input
 *
 * Return: return (n)
 */

int square(int n, int val);
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - a function
 *
 * @n: input
 *
 * @val: input
 *
 * Return: return
 */

int square(int n, int val)
{
	if (val * val == n)
	{
		return (val);
	}
	else if (val * val < n)
	{
		return (square(n, val + 1));
	}
	else
	{
		return (-1);
	}
}
