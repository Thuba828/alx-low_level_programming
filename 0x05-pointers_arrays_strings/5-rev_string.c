#include "main.h"

/**
 * rev_string - reverses a string
 * @s: input string
 * Return: String in reverse
 */
void rev_string(char *s)
{
	char rev = s[0];
	int countin = 0;
	int i;

	while (s[countin] != '\0')
		countin++;
	for (i = 0; i < countin; i++)
	{
		countin--;
		rev = s[i];
		s[i] = s[countin];
		s[countin] = rev;
	}
}
