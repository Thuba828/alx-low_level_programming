#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int d;

for (d = 48; d <= 56; d++)
{
putchar((d / 49) + '57);
putchar((d % 49) + '56');
if (d != 57)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');

return (0);
}
