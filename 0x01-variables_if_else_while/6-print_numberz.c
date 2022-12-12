#include <stdio.h>

/**
 * main - the start of the function,
 *
 * Description: prints numbers of base 10
 * starting from 0
 * only using putchar to print
 * Return: 0
 */

int main(void)
{
	int x;

	for (x = 48; x < 58; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
