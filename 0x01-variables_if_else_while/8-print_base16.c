#include <stdio.h>
#include <stdlib.h>
/**
 * main - the entry point
 * Description: prints number in base 16 hexadecimal
 * in lowercase
 *
 *Return: 0
 */

int main(void)
{
	int num = '0'; /* set num to zero*/
	char alpha = 'a'; /* set alpha to lowercase a*/

	while (num <= '9') /* from 0-9*/
	{
		putchar(num);
		num++;
	}
	while (alpha <= 'f') /* from a-f*/
	{
		putchar(alpha);
		alpha++;
	}

	putchar('\n');
	return (0);
}
