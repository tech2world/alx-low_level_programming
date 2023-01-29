#include <stdio.h>

/**
  * main - peint first 50 fibonnaci numbers
  * separated by comma follwed by space.
  *
  * Return: 0
  */
int main(void)
{
	int i;
	unsigned long fib1 = 0, fib2 = 1, sum;

	for (i = 0; i < 50; i++)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);

		fib1 = fib2;
		fib2 = sum;

		if (i == 49)
		{
			printf("\n");
		}
		else
			printf(", ");
	}
	return (0);
}
