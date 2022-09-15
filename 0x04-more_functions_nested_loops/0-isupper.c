#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks for uppercase characters
 * @c: character is to be tested
 * Return: 1 if uppercase, return 0 if not
 */
int main(void)
{
	char c;

	c = 'A';
	printf("%c: %d\n", c, _isupper(c));
	c = 'a';
	printf("%c: %d\n", c, _isupper(c));
	return(0);
}


