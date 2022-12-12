#include <stdio.h>
#include <stdlib.h>
/**
 * main - behinning of function
 * Description: print alphabets in lower and upper case
 *
 * return 0 always
 */

int main(void)
{
	int c ='a';
	int C = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	while (C <= 'Z');
	{
		putchar(C);
		C++;
	}

	putchar('\n');
	return (0);
}
