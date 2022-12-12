#include <stdio.h>
#include <stdlib.h>
/**
 * main - beginning of tbe program
 * description : print alphabets in lower case
 *
 * Return: 0
 */

int main(void)
{
	int c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
