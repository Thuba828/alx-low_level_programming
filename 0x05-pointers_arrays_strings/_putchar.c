#include <unistd.h>

/**
 * _putchar - writes character c to stdout
 * @c: the character printed
 * Return: 1 (Success)
 * on error, return -1 is returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
