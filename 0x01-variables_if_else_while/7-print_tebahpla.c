#include <stdio.h>
#include <stdlib.h>

/**
 * main - this is the entry point
 * Description: prints alphapets in reverse order
 *
 *Return: 0
 */

int main(void)
{
	int val = 'z';

	while (val >= 'a')
	{
		putchar(val);
		val--;
	}
	putchar('\n');
	return (0);
}
