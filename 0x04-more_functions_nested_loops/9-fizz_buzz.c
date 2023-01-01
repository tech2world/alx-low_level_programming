#include <stdio.h>

/**
  * main - prints fizzbuzz for multiple of 5 and 3,fizz for multiple of 3
  * and buzz for multiple of 5 otherwise prints the no
  * Return: 0
  */

int main(void)
{
	int i;

	for (i = 1; i < 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("Buzz\n");
	return (0);
}
