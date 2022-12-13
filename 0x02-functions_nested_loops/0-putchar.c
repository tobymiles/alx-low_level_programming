#include <unistd.h>


/**
 * _putchar - prints character c to the standard output
 *
 * Return: 1
 *
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
