#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point of the function
 * Description: prints all possible different combinations of two digits,
 * must be separated by a , and then a space. the two digits must be different
 *
 *Return: 0
 */

int main(void)
{

	int x, y;

	for (x = '0'; x <= '9'; x++)
	{
		for (y = x + 1; y <= '9'; y++)
		{
			putchar(x);
		putchar(y);
		if (x < '8')
		{
			putchar(',');
			putchar(' ');
		}
		}
	}
	putchar('\n');
	return (0);
}
