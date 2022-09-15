#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks for uppercase characters
 * @c: character is to be tested
 * Return: 1 if uppercase, return 0 if not
 */
int _uppercase(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	return (0);
}

