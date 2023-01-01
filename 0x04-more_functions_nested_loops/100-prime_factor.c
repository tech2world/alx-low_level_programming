#include <stdio.h>

/**
  * main - finds and print the largest prime factor
  *
  * Return: 0 always
  */
int main(void)
{
	long prime_num;
	int divisor, prime_factor;


	prime_num = 612852475143;

	for (divisor = 2; prime_num > 1; divisor++)
	{
		while (prime_num % divisor == 0)
		{
			prime_num /= divisor;
			prime_factor = divisor;
		}
	}

	printf("%d\n", prime_factor);
	return (0);
}
