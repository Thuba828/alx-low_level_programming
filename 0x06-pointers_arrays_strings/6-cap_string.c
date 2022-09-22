#include "main.h"

/**
 * cap_string - capitalises all the words of a string
 * @str: string to capatal
 * Return: returns the capitalised string
 */
char *cap_string(char *str)
{
	int index = 0;

	while (str[++index])
	{
		while (!(str[index] >= 'a' && str[index] <= 'z'))
			index++;
		if (str[index - 1] == ' ' ||
				str[index - 1] == '\t' ||
				str[index - 1] == '\n' ||  
				str[index - 1] == ',' ||  
				str[index - 1] == ';' ||  
				str[index - 1] == '.' ||  
				str[index - 1] == '!' ||  
				str[index - 1] == '?' ||  
				str[index - 1] == '"' ||  
				str[index - 1] == '(' ||  
				str[index - 1] == ')' || 
				str[index - 1] == '{' || 
				str[index - 1] == '}')
		      str[index] -= 32;
	}
	return (str);
}

