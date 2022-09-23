#include "main.h"

int main(void)
{
	int n;
	int a[5];
	int *p;
	a[2] = 1024, p = &n; 
	/*
	 * writing the line of code
	 * Remember:
	 * - may not use a
	 * - not allowed to modify p
	 * - only one statement not allowed to code anything else   
	 */
	*(p + 5) = 98;
	/* ...let it print 98\n */
	printf("a[2] = %d/n", a[2]);
	return (0);
}
