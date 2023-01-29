#include <stdio.h>

/**
  * main - print the sum of evened num fib sequence whose term is not more
  * than 4 million.
  *
  * Return: always 0
  */
int main(void)
{
	unsigned long fib1, fib2, fib_sum;
	float tot_sum;

	fib1 = 0, fib2 = 1;

	while (1)
	{
		fib_sum = fib1 + fib2;
		if (tot_sum > 4000000)
			break;
		if ((fib_sum % 2) == 0)
			tot_sum += tot_sum;

		fib1 = fib2;
		fib2 = fib_sum;
	}
	printf("%.0f\n", tot_sum);
	return (0);
}
