#include <stdio.h>

/**
 * main - starting point of the function
 * Description: prints all possible different combinations of three numbers
 * separated by , and then  a space. outputs the smallest combination of the
 * digits and prints in ascending order
 *
 *Return: 0
 */

int main(void)
{
	int one = '0';
	int tens = '0';
	int units = '0';

	for (units = '0'; units <= '9'; units++)
	{
		for (tens = '0'; tens <= '9'; tens++)
		{
			for (one = '0'; one <= '9'; one++)
			{
				if (!((one == tens) || (tens == units) || (tens > one)
							|| (units > tens))) /* remove repetition*/
				{
					putchar(units);
					putchar(tens);
					putchar(one);
					if (!(one == '9' && units == '7' && tens == '8')) /* adds , and space*/
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
