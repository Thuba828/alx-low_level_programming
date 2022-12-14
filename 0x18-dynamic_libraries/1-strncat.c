#include "main.h"

/**
 * _strncat - links two strings
 * @dest: string to be appended upon
 * @src: string to be complete at end of dest
 * @n: interger parameter to compare index
 * Return: returns new linked or concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];
	return (dest);
}
