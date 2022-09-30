#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: buffer storing the sting copy
 * @src: the source string
 * @n:max number of bytes copied
 * Return: return dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
