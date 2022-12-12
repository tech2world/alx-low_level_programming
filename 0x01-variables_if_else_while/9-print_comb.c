#include <stdio.h>
#include <stdlib.h>

/**
 * main - the entry point of the function
 * Description: prints all possible combinations of single-digit numbers,
 * separated by , followed by a space and in ascending order
 *
 * Return: 0 always
 */

int main(void)
{
	int num = '0'; /* initialize*/

	while (num <= '9') /*range 0-9*/
	{
		putchar(num);

		if (num != '9')
		{
			putchar(',');
			putchar(' ');
		}
		num++;
	}
	putchar('\n');
	return (0);
}
