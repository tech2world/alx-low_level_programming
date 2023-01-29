#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
  * main - generate random valid passwords
  *
  * Return: password
  */
int main(void)
{
	int my_rand, i, total;

	srand(time(NULL));
	for (i = 0, total = 2772; total > 122; i++)
	{
		my_rand = (rand() % 125) + 1;
		printf("%c", total);
		total -= my_rand;
	}
	printf("%c", total);
	return (0);
}
