#include "main.h"
#include <stdio.h>

/**
*main - prints either number
*or fizz or buzz or fizzbuzz
*
*
*Return: 0
*/

int main(void)
{
	int num = 1;
	
	while (num++ < 100)
	{
		if ((num % 3 == 0) && (num % 5 == 0))
		{
			printf("Fizzbuzz ");
		}
		else if ((num % 3) == 0)
		{
			printf("Fizz ");
		}
		else if ((num % 5) == 0)
		{
			if (num != 100)
			{
				printf("Buzz ");
			}
			else
			{
				printf("Buzz");
			}
		} else
		{
			printf("%d ", num);
		}
	}
	printf("\n");
	return (0);
}
