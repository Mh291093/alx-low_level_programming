#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: Print a quote by using write function
 *	write(int fd,const void *buffer,size_t count)
 *
 * Return: 1 (error)
*/

int main(void)
{	char quo[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, quo, 59);
	return (1);
}
