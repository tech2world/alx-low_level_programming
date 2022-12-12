#include <stdio.h>

/**
 * main - beginning of the function
 * Description: prints all possible combinations of two two-digit numbers.
 * separated by a space.
 * All numbers should be printed with two digits. 1 should be printed as 01
 * The combination of numbers must be separated by comma, followed by a space
 * The combinations of numbers should be printed in ascending order.
 *
 * Return: 0
 */

int main(void)
{
	int x, y;

	for (x = '0'; x < 100; x++)
	{
		for (y = '0'; y < 100; y++)
		{
			if (x < y)
			{
				putchar((x / 10) + 48);
				putchar((x % 10) + 48);
				putchar(' ');
				putchar((y / 10) + 48);
				putchar((y % 10) + 48);
				if (x != 98 || y != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

