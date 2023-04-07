#include <stdio.h>
#include "main.h"

/**
 * main - a function
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc _attribute_((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
