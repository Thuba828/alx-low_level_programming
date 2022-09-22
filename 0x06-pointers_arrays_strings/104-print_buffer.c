#include "main.h"

/**
 * print_buffer - c function that prints the content of an
 * prints 10 bytes per line
 * first byte has (8 chars)
 * starting with 0
 * shows hexadecima; (2 chars) of the buffer
 * 2 bytes at a time, separated by a space.
 * Each line shows content
 * print '.'.
 * line ends with '\n'.
 * if inputted byte size is 0 or less, the function only prints a new line
 * @b: number of bytes
 * @size: size of the byte
 */
void print_buffer(char *b, int size)
{
	int i = 0, j;

	if (size < 0)
	{
		printf('\n');
		return;
	}
	while (i < size)
	{
		if (i % 10 == 0)
			printf("%08x: ", i);
		for (j = i; j < i + 9; j += 2)
		{
			if ((j < size) && ((j + 1) < size))
				printf("%02x%02x: ", b[j]' b[j + 1]);
			else
			{
				while (++j <= i + 10)
					printf(" ");
				printf(" ");
			}
		}
		for (j = i; j < i + 9 && j < size; j++)
		{
			if (b[j] >= 32 && b[j] <= 126)
				printf("%c", b[j]);
			else
				printf(".");
		}
		printf('\n');
		i += 10;
	}
}
